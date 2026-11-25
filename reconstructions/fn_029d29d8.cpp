#include "botw/safe_string.h"

extern "C" bool fn_030ff89c(const void*, void*, const void*);
extern "C" unsigned char data_10180098[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029d29d8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180098;
    }
    fn_030ff89c(self, (char*)self + 20, &key);
}
