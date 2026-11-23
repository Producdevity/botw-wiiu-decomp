#include "botw/string_format.h"

namespace {
struct BufferedString {
    char* text;
    void* vtable;
    int capacity;
};
}

extern "C" int fn_030b0dac(char* buffer, int capacity, const char* format, GhsArgumentList* arguments);

extern "C" int fn_030b0df8(void* string, const char* format, GhsArgumentList* arguments) {
    BufferedString* target = static_cast<BufferedString*>(string);
    return fn_030b0dac(target->text, target->capacity, format, arguments);
}
