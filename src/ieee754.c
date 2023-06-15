#include "ieee754.h"

union ieee754_transf32 ieee754_tpack_f32(ieee754_f32_t f32) {
	union ieee754_transf32 tf32;
	tf32.num = f32;
	return tf32;
}


union ieee754_transf64 ieee754_tpack_f64(ieee754_f64_t f64) {
	union ieee754_transf64 tf64;
	tf64.num = f64;
	return tf64;
}

union ieee754_transf80 ieee754_tpack_f80(ieee754_f80_t f80) {
	union ieee754_transf80 tf80;
	tf80.num = f80;
	return tf80;
}
