#include "botw/lookup_scalar.h"

extern "C" bool fn_0286af5c(void* owner, const unsigned char* input, const void* key) {
    return lookup_copy::store_scalar<4>(owner, input, key);
}
