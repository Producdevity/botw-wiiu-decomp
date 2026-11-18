#include "botw/lookup_scalar.h"

extern "C" bool fn_02943fb8(void* owner, const float* input, const void* key) {
    return lookup_copy::store_scalar<2>(owner, input, key);
}
