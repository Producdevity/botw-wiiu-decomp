#include "botw/safe_string.h"

extern "C" unsigned char data_10144b7c[];
extern "C" unsigned char data_10144b8c[];
extern "C" unsigned char data_10144b98[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02849d20(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_0284af88(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_02849d20(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10144b7c;
            fn_030e9d18(self, (char*)self + 80, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10144b8c;
        }
        fn_030e9aa8(self, (char*)self + 84, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10144b7c;
        key.string = (const char*)data_10144b98;
    }
    fn_030e9aa8(self, (char*)self + 92, &key);
}
