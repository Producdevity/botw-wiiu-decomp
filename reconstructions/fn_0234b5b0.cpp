#include "botw/buffered_safe_string.h"

extern "C" void fn_0200bfcc(int, int, int, int);

extern "C" BufferedSafeString* fn_0234b5b0(BufferedSafeString* self, const SafeString* other) {
    int copyLength = -1;
    const SafeString& source = *other;
    char* destination = self->string;
    const char* text = safe_string_cstr(&source);
    if (destination != text) {
        if (copyLength < 0)
            copyLength = safe_string_length(&source);
        if (copyLength >= self->size)
            copyLength = self->size - 1;
        fn_0200bfcc((int)destination, (int)text, copyLength, 0);
        destination[copyLength] = data_10263a00[0];
    }
    return self;
}
