/* 
 * ieee754.h - Library for IEEE-754-2019 floating point arithmetic standards
 * and an internal representation transformer.
 */

#include <stdint.h>
/* IEEE-754 32-bit float */
typedef struct {
  unsigned int sign : 1;
  unsigned int exponent : 8;
  unsigned int mantissa : 23;
} ieee754_if32_t;

/* IEEE-754 64-bit float */
typedef struct {
  unsigned int sign : 1;
  unsigned int exponent :11;
  unsigned int mantissa : 52;
} ieee754_if64_t;

/* IEEE-754 80-bit float */
typedef struct {
  unsigned int sign : 1;
  unsigned int exponent :15;
  unsigned int mantissa : 64;
} ieee754_if80_t;

typedef float ieee754_f32_t;
typedef double ieee754_f64_t;
typedef long double ieee754_f80_t;

/* :trollface: (I do it for ease of use but it becomes like WinAPI where you have to resolve a chain of typedefs) */
typedef ieee754_f32_t ieeef32_t;
typedef ieee754_f64_t ieeef64_t;
typedef ieee754_f80_t ieeef80_t;

/* Unions for transmutation of numbers into their internal representations */

/* Transmute 32-bit floats */
union ieee754_transf32 {
	ieee754_if32_t repr;
	ieee754_f32_t num;
	int32_t irepr;
};

/* Transmute 64-bit floats */
union ieee754_transf64 {
	ieee754_if64_t repr;
	ieee754_f64_t num;
	int64_t irepr;
};

/* Transmute 80-bit floats */
union ieee754_transf80 {
	ieee754_if80_t repr;
	ieee754_f80_t num;
};

/* Functions that pack numbers into their representations */

/* Transpack a 32-bit float */
union ieee754_transf32 ieee754_tpack_f32(ieee754_f32_t f32);
/* Transpack a 64-bit float */
union ieee754_transf64 ieee754_tpack_f64(ieee754_f64_t f64);
/* Transpack a 80-bit float */
union ieee754_transf80 ieee754_tpack_f80(ieee754_f80_t f80);
