#ifndef BOTW_BUFFERED_SAFE_STRING_H
#define BOTW_BUFFERED_SAFE_STRING_H

#include "botw/safe_string.h"

extern "C" const unsigned char data_10263a00[];

// Writable string: text buffer and vtable as in SafeString, then the buffer
// size including the terminator.
struct BufferedSafeString {
    char* string;
    const void* vtable;
    int size;
};
typedef char BufferedSafeStringSize[sizeof(BufferedSafeString) == 12 ? 1 : -1];

struct SafeStringVtableEntry {
    int offset;
    void (*function)(const SafeString* string);
};

inline void safe_string_assure_termination(const SafeString* string) {
    static_cast<const SafeStringVtableEntry*>(string->vtable)[3].function(string);
}

inline const char* safe_string_cstr(const SafeString* string) {
    safe_string_assure_termination(string);
    return string->string;
}

// Strings longer than 0x80000 characters count as empty.
inline int safe_string_length(const SafeString* string) {
    safe_string_assure_termination(string);
    int length = 0;
    for (;;) {
        if (length > 0x80000 || string->string[length] == (char)data_10263a00[0])
            break;
        length++;
    }
    if (length > 0x80000)
        return 0;
    return length;
}

#endif
