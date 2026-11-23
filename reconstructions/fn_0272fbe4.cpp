#include "botw/safe_string.h"

extern "C" unsigned char data_1011f8c0[];
extern "C" unsigned char data_1011f8d0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea084(void*, void*, void*);

extern "C" void fn_0272fbe4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011f8c0;
        fn_030e9ff4(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011f8d0;
    }
    fn_030ea084(self, (char*)self + 40, &key);
}
