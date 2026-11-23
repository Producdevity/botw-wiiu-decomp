#include "botw/safe_string.h"

extern "C" unsigned char data_100a6028[];
extern "C" unsigned char data_100a6034[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023e6234(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_023e4fe4(void* self) {
    SafeString key;
    if (true) {
        fn_023e6234(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a6028;
        fn_030e9be0(self, (char*)self + 104, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a6034;
    }
    fn_030e9c7c(self, (char*)self + 108, &key);
}
