#include "botw/safe_string.h"

extern "C" unsigned char data_1015e6c8[];
extern "C" unsigned char data_1015e6d4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0272e224(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_028fb648(void* self) {
    SafeString key;
    if (true) {
        fn_0272e224(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015e6c8;
        fn_030e9be0(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015e6d4;
    }
    fn_030e9c7c(self, (char*)self + 100, &key);
}
