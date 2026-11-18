#include "botw/lookup_payload.h"

extern "C" bool fn_022aac0c(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<1>(owner, output, key);
}
