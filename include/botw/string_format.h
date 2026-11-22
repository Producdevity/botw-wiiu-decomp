#ifndef BOTW_STRING_FORMAT_H
#define BOTW_STRING_FORMAT_H

// Formats into a buffered string {text, vtable, capacity}; returns the
// formatted length.
extern "C" int fn_030b0e10(void* string, const char* format, ...);

#endif
