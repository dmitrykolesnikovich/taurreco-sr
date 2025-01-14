
#ifndef SR_MATH_H
#define SR_MATH_H

#include <string.h>
#include <math.h>
#include "sr.h"

/**
 * sr_math.h
 * --------
 * provides an internal matrix representation (mat4)
 * and associated operations for the sr lib
 * 
 */

/*********************************************************************
 *                                                                   *
 *                        4 by 4 matrix struct                       *
 *                                                                   *
 *********************************************************************/

struct mat4 {
    float e00, e01, e02, e03;
    float e10, e11, e12, e13;
    float e20, e21, e22, e23;
    float e30, e31, e32, e33;
};

/*********************************************************************
 *                                                                   *
 *                        public declarations                        *
 *                                                                   *
 *********************************************************************/

extern void 
matmul(struct mat4* a, struct mat4* b);

extern int
invert(struct mat4* a);

extern void
transpose(struct mat4* a);

extern void
mat3(struct mat4* a);

extern void
matmul_v(float* a, struct mat4* b, float* c);

extern void
sub_v(float* a, float* b, float* c);

extern void
scale_v(float* a, float* b, float c);

extern void
reflect_v(float* r, float* n, float* v);

extern float
dot(float* a, float* b);

extern void
cross(float* a, float* b, float* c);

extern float
magnitude(float* a);

extern void
normalize(float* a);

extern float
radians(float deg);

#endif   /* SR_MATH_H */