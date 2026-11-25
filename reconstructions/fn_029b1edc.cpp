#include "botw/safe_string.h"

extern "C" void fn_030ff774(void*, void*, void*);
extern "C" unsigned char data_101796f0[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029b1edc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101796f0;
    }
    fn_030ff774(self, (char*)self + 20, &key);
}
