/*****
 * This file is automatically generated by findsym.pl
 * Changes will be overwritten.
 *****/

// If the ADDSYMBOL macro is not already defined, define it with the default
// purpose of referring to an external pre-translated symbol, such that
// SYM(name) also refers to that symbol.
#ifndef ADDSYMBOL
    #define ADDSYMBOL(name) extern sym::symbol PRETRANSLATED_SYMBOL_##name
    #define SYM(name) PRETRANSLATED_SYMBOL_##name
#endif

ADDSYMBOL(a);
ADDSYMBOL(accel);
ADDSYMBOL(arclength);
ADDSYMBOL(arctime);
ADDSYMBOL(atleast);
ADDSYMBOL(b);
ADDSYMBOL(c);
ADDSYMBOL(cyclic);
ADDSYMBOL(d);
ADDSYMBOL(dir);
ADDSYMBOL(dirtime);
ADDSYMBOL(extension);
ADDSYMBOL(fillrule);
ADDSYMBOL(fuzz);
ADDSYMBOL(g);
ADDSYMBOL(incircle);
ADDSYMBOL(inside);
ADDSYMBOL(intersect);
ADDSYMBOL(intersections);
ADDSYMBOL(l);
ADDSYMBOL(length);
ADDSYMBOL(m);
ADDSYMBOL(max);
ADDSYMBOL(maxAfterTransform);
ADDSYMBOL(maxtimes);
ADDSYMBOL(min);
ADDSYMBOL(minAfterTransform);
ADDSYMBOL(mintimes);
ADDSYMBOL(normalize);
ADDSYMBOL(nurb);
ADDSYMBOL(orient);
ADDSYMBOL(p);
ADDSYMBOL(phi);
ADDSYMBOL(piecewisestraight);
ADDSYMBOL(point);
ADDSYMBOL(postcontrol);
ADDSYMBOL(precontrol);
ADDSYMBOL(q);
ADDSYMBOL(radius);
ADDSYMBOL(relativedistance);
ADDSYMBOL(reverse);
ADDSYMBOL(sign);
ADDSYMBOL(size);
ADDSYMBOL(straight);
ADDSYMBOL(subpath);
ADDSYMBOL(t);
ADDSYMBOL(theta);
ADDSYMBOL(unstraighten);
ADDSYMBOL(w0);
ADDSYMBOL(w1);
ADDSYMBOL(w2);
ADDSYMBOL(w3);
ADDSYMBOL(windingnumber);
ADDSYMBOL(z);
ADDSYMBOL(z0);
ADDSYMBOL(z1);
ADDSYMBOL(z2);
ADDSYMBOL(z3);
