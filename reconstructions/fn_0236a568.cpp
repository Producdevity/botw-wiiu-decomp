#include "botw/safe_string.h"

extern "C" unsigned char data_10090de4[];
extern "C" unsigned char data_10090df8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02232514(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_0236a568(void* self) {
    SafeString key;
    if (true) {
        fn_02232514(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10090de4;
        fn_030e9c7c(self, (char*)self + 64, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10090df8;
    }
    fn_030e9c7c(self, (char*)self + 68, &key);
}
