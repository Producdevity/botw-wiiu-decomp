#include "botw/safe_string.h"

extern "C" unsigned char data_10031e64[];
extern "C" unsigned char data_10031e78[];
extern "C" unsigned char data_10031e5c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022c4d7c(void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_021607e4(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022c4d7c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10031e64;
            fn_030e9be0(self, (char*)self + 92, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10031e78;
        }
        fn_030e9d18(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10031e64;
        key.string = (const char*)data_10031e5c;
    }
    fn_030e9aa8(self, (char*)self + 100, &key);
}
