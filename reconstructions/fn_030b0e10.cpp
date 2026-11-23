#include "botw/string_format.h"

extern "C" int fn_030b0e10(void* string, const char* format, ...) {
    GhsArgumentList arguments;
    arguments.overflow_area = (char*)&__builtin_va_alist;
    arguments.register_area = (char*)&__va_intreg;
    arguments.used_gprs = 2;
    arguments.used_fprs = 0;
    return fn_030b0df8(string, format, &arguments);
}
