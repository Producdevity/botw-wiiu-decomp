#include "botw/lookup_scalar.h"

extern "C" bool fn_027a4278(void* owner, const unsigned* input, const void* key) {
    return lookup_copy::store_scalar<1>(owner, input, key);
}
