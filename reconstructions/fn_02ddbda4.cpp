#include "botw/buffered_safe_string.h"

extern "C" bool fn_02ddbda4(const SafeString* self, const SafeString* other) {
    safe_string_assure_termination(self);
    if (safe_string_cstr(self) == safe_string_cstr(other))
        return true;
    for (int i = 0; i <= 0x80000; i++) {
        if (self->string[i] != other->string[i])
            return false;
        if (self->string[i] == (char)data_10263a00[0])
            return true;
    }
    return false;
}
