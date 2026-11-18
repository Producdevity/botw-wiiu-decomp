#include "botw/lookup_payload.h"

extern "C" bool fn_022a4804(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<10>(owner, output, key);
}
