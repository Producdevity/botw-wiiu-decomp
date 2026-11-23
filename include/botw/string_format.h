#ifndef BOTW_STRING_FORMAT_H
#define BOTW_STRING_FORMAT_H

#include "botw/ghs_varargs.h"

// Formats into a buffered string {text, vtable, capacity}; returns the
// formatted length.
extern "C" int fn_030b0e10(void* string, const char* format, ...);
extern "C" int fn_030b0df8(void* string, const char* format, GhsArgumentList* arguments);

#endif
