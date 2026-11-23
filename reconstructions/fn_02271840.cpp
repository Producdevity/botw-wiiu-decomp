#include "botw/safe_string.h"

extern "C" unsigned char data_10068e58[];
extern "C" unsigned char data_10068e60[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_024202d0(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02271840(void* self) {
    SafeString key;
    if (true) {
        fn_024202d0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068e58;
        fn_030e9b44(self, (char*)self + 92, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068e60;
    }
    fn_030e9aa8(self, (char*)self + 96, &key);
}
