#include "botw/safe_string.h"

extern "C" unsigned char data_100a7944[];
extern "C" unsigned char data_100a7928[];
extern "C" unsigned char data_100a7930[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022c4d7c(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);

extern "C" void fn_023eca08(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022c4d7c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100a7944;
            fn_030e9b44(self, (char*)self + 92, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100a7928;
        }
        fn_030e9aa8(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a7944;
        key.string = (const char*)data_100a7930;
    }
    fn_030e9d18(self, (char*)self + 104, &key);
}
