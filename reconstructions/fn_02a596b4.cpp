#include "botw/safe_string.h"

extern "C" void fn_0314b1c8(void*, void*, void*);
extern "C" unsigned char data_1018e678[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02a596b4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018e678;
    }
    fn_0314b1c8(self, (char*)self + 16, &key);
}
