#include "botw/safe_string.h"

extern "C" unsigned char data_100182f0[];
extern "C" unsigned char data_10018304[];
extern "C" unsigned char data_100182d4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02357398(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" void fn_030ea23c(void *, void *, void *);

extern "C" void fn_020c88b4(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_02357398(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100182f0;
            fn_030e9be0(self, (char*)self + 52, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10018304;
        }
        fn_030e9d18(self, (char*)self + 56, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100182f0;
        key.string = (const char*)data_100182d4;
    }
    fn_030ea23c(self, (char*)self + 60, &key);
}
