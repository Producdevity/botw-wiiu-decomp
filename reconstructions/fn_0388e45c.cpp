#include "botw/buffered_safe_string.h"

extern "C" void fn_0434bff8(int, int, int, int);

extern "C" int fn_0388e45c(BufferedSafeString* self, const SafeString* source, int copyLength) {
    char* destination = self->string;
    const char* text = safe_string_cstr(source);
    if (destination == text)
        return 0;
    if (copyLength < 0)
        copyLength = safe_string_length(source);
    int size = self->size;
    if (copyLength >= size)
        copyLength = size - 1;
    fn_0434bff8((int)destination, (int)text, copyLength, 0);
    destination[copyLength] = data_10263a00[0];
    return copyLength;
}
