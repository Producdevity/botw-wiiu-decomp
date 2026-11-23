#ifndef BOTW_SAFE_STRING_H
#define BOTW_SAFE_STRING_H

// String descriptor passed by address: text pointer, then the GHS vtable
// pointer (data_10263910 for plain strings; slot at +28 assures termination).
struct SafeString {
    const char* string;
    const void* vtable;
};
typedef char SafeStringSize[sizeof(SafeString) == 8 ? 1 : -1];

#endif
