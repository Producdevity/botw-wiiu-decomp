#include "botw/lookup_payload.h"

extern "C" bool fn_025a47a8(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<3>(owner, output, key);
}
