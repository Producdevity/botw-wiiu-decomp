#include "botw/lookup_payload.h"

extern "C" bool fn_024c548c(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<2>(owner, output, key);
}
