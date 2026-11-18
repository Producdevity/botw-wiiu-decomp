#include "botw/lookup_payload.h"

extern "C" bool fn_02ba1580(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<4>(owner, output, key);
}
