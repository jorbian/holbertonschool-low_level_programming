#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

//#define ABS(n) ((n) * ((n>0) - (n<0)))
#define ABS(n) ((n) < 0 ? (-n) : (n))

#endif
