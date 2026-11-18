#include "botw/lookup_payload.h"

extern "C" bool fn_021045bc(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<10>(owner, output, key);
}
