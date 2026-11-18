#include "botw/lookup_scalar.h"

extern "C" bool fn_0332ab2c(void* owner, const unsigned* input, const void* key) {
    return lookup_copy::store_scalar<1>(owner, input, key);
}
