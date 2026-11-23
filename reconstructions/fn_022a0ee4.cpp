#include "botw/safe_string.h"

extern "C" unsigned char data_10070664[];
extern "C" unsigned char data_10070658[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0243800c(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_022a0ee4(void* self) {
    SafeString key;
    if (true) {
        fn_0243800c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10070664;
        fn_030e9d18(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10070658;
    }
    fn_030e9aa8(self, (char*)self + 100, &key);
}
