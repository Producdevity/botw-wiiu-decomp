#include "botw/lookup_copy.h"

extern "C" bool fn_027e1f1c(void* owner, const lookup_copy::FloatTriple& input, const void* key) {
    return lookup_copy::store_float_triple(owner, input, key);
}
