#include "botw/safe_string.h"

extern "C" unsigned char data_101791f4[];
extern "C" unsigned char data_10179200[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);

extern "C" void fn_029b02ac(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101791f4;
        fn_030ff7a8(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10179200;
    }
    fn_030ff7a8(self, (char*)self + 24, &key);
}
