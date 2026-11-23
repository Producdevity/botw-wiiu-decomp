#include "botw/safe_string.h"

extern "C" unsigned char data_1006f7ac[];
extern "C" unsigned char data_1006f7b4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02296ae0(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0229d438(void* self) {
    SafeString key;
    if (true) {
        fn_02296ae0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006f7ac;
        fn_030e9b44(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006f7b4;
    }
    fn_030e9b44(self, (char*)self + 28, &key);
}
