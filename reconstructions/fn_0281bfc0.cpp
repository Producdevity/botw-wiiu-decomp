#include "botw/safe_string.h"

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" unsigned char data_1013e0d0[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0281bfc0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013e0d0;
    }
    fn_030ea284(self, (char*)self + 32, &key);
}
