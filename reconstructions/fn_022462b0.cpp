#include "botw/safe_string.h"

extern "C" unsigned char data_100602a4[];
extern "C" unsigned char data_100602ac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022c4d7c(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_022462b0(void* self) {
    SafeString key;
    if (true) {
        fn_022c4d7c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100602a4;
        fn_030e9aa8(self, (char*)self + 92, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100602ac;
    }
    fn_030e9aa8(self, (char*)self + 100, &key);
}
