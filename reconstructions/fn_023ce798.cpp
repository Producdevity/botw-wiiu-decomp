#include "botw/lookup_payload.h"

extern "C" bool fn_023ce798(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<10>(owner, output, key);
}
