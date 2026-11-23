#include "botw/safe_string.h"

extern "C" unsigned char data_1005f0b4[];
extern "C" unsigned char data_1005f0bc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021eb0e8(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0223d2c4(void* self) {
    SafeString key;
    if (true) {
        fn_021eb0e8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005f0b4;
        fn_030e9aa8(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005f0bc;
    }
    fn_030ea284(self, (char*)self + 48, &key);
}
