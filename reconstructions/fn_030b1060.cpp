#include "botw/ghs_varargs.h"
#include "botw/string_format.h"

extern "C" int fn_030b1048(void* string, const char* format, GhsArgumentList* arguments);

extern "C" int fn_030b1060(void* string, const char* format, ...) {
    GhsArgumentList arguments;
    arguments.overflow_area = (char*)&__builtin_va_alist;
    arguments.register_area = (char*)&__va_intreg;
    arguments.used_gprs = 2;
    arguments.used_fprs = 0;
    return fn_030b1048(string, format, &arguments);
}
