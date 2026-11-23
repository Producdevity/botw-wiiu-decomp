#include "botw/safe_string.h"

extern "C" unsigned char data_1017f9b0[];
extern "C" unsigned char data_1017f9c0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);

extern "C" void fn_029d03f8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f9b0;
        fn_030ff7a8(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f9c0;
    }
    fn_030ff7a8(self, (char*)self + 24, &key);
}
