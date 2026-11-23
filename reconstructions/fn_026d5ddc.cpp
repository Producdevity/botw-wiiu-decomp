#include "botw/safe_string.h"

extern "C" unsigned char data_10114414[];
extern "C" unsigned char data_101143f4[];
extern "C" unsigned char data_10114404[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_026d6fbc(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);

extern "C" void fn_026d5ddc(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_026d6fbc(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10114414;
            fn_030e9b44(self, (char*)self + 76, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_101143f4;
        }
        fn_030e9be0(self, (char*)self + 80, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10114414;
        key.string = (const char*)data_10114404;
    }
    fn_030e9be0(self, (char*)self + 84, &key);
}
