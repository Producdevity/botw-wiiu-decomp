#include "botw/safe_string.h"

extern "C" unsigned char data_100fb1b8[];
extern "C" unsigned char data_100fb1cc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" void fn_030ea11c(void*, void*, void*);

extern "C" void fn_0262b4c4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fb1b8;
        fn_030ea23c(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fb1cc;
    }
    fn_030ea11c(self, (char*)self + 36, &key);
}
