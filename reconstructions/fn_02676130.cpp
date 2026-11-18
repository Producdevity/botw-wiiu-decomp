#include "botw/lookup_copy.h"

extern "C" bool fn_02676130(void* owner, const lookup_copy::FloatTriple& input, const void* key) {
    return lookup_copy::store_float_triple(owner, input, key);
}
