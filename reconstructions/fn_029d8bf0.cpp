#include "botw/safe_string.h"

extern "C" unsigned char data_10181dc4[];
extern "C" unsigned char data_10181db4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029d4d34(void*);
extern "C" void fn_030ff774(void*, void*, void*);

extern "C" void fn_029d8bf0(void* self) {
    SafeString key;
    if (true) {
        fn_029d4d34(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10181dc4;
        fn_030ff774(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10181db4;
    }
    fn_030ff774(self, (char*)self + 28, &key);
}
