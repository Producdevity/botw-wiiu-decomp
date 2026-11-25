#include "botw/safe_string.h"

extern "C" bool fn_030ff89c(const void*, void*, const void*);
extern "C" unsigned char data_10180134[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029d2aec(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180134;
    }
    fn_030ff89c(self, (char*)self + 20, &key);
}
