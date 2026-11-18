#include "botw/lookup_payload.h"

extern "C" bool fn_027b2f08(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<4>(owner, output, key);
}
