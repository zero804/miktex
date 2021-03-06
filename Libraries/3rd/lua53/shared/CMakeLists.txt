## CMakeLists.txt                                       -*- CMake -*-
##
## Copyright (C) 2010-2020 Christian Schenk
## 
## This file is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published
## by the Free Software Foundation; either version 2, or (at your
## option) any later version.
## 
## This file is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with this file; if not, write to the Free Software
## Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
## USA.

set(${lua53_dll_name}_sources ${lua_lib_sources})

if(MIKTEX_NATIVE_WINDOWS)
  configure_file(
    ../liblua.rc.in
    ${CMAKE_CURRENT_BINARY_DIR}/liblua.rc
  )
  list(APPEND ${lua53_dll_name}_sources
      ${CMAKE_CURRENT_BINARY_DIR}/liblua.rc
  )
endif()

add_library(${lua53_dll_name} SHARED ${${lua53_dll_name}_sources})

set_property(TARGET ${lua53_dll_name} PROPERTY FOLDER ${MIKTEX_CURRENT_FOLDER})

set_property(TARGET ${lua53_dll_name} PROPERTY WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

target_compile_definitions(${lua53_dll_name}
  PUBLIC
    ${public_compile_definitions}
)

target_include_directories(${lua53_dll_name}
  PUBLIC
    ${public_include_directories}
)

target_link_libraries(${lua53_dll_name}
  PRIVATE
    ${core_dll_name}
)

if(MIKTEX_UNIX_ALIKE)
  target_link_libraries(${lua53_dll_name}
    PRIVATE
      ${CMAKE_DL_LIBS}
      m
  )
endif()

if(MIKTEX_NATIVE_WINDOWS)
  target_link_libraries(${lua53_dll_name}
    PRIVATE
      ${utf8wrap_dll_name}
  )
endif()

set_shared_library_version_properties(
  ${lua53_dll_name}
  ${MIKTEX_COMP_MAJOR_VERSION}.${MIKTEX_COMP_MINOR_VERSION}.${MIKTEX_COMP_PATCH_VERSION}
  ${MIKTEX_COMP_INTERFACE_VERSION}
)

install(TARGETS ${lua53_dll_name}
  RUNTIME DESTINATION "${MIKTEX_BINARY_DESTINATION_DIR}"
  LIBRARY DESTINATION "${MIKTEX_LIBRARY_DESTINATION_DIR}"
  ARCHIVE DESTINATION "${MIKTEX_LIBRARY_DESTINATION_DIR}"
)
