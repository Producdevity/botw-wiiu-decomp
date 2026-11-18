#include "botw/lookup_payload.h"

extern "C" bool fn_027b6158(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<3>(owner, output, key);
}
