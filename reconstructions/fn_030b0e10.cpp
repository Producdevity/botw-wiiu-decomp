#include "botw/ghs_varargs.h"
#include "botw/string_format.h"

namespace {
struct ArgumentList {
    unsigned char used_gprs;
    unsigned char used_fprs;
    char* overflow_area;
    char* register_area;
};
}

extern "C" int fn_030b0df8(void* string, const char* format, ArgumentList* arguments);

extern "C" int fn_030b0e10(void* string, const char* format, ...) {
    ArgumentList arguments;
    arguments.overflow_area = (char*)&__builtin_va_alist;
    arguments.register_area = (char*)&__va_intreg;
    arguments.used_gprs = 2;
    arguments.used_fprs = 0;
    return fn_030b0df8(string, format, &arguments);
}
