#include "botw/safe_string.h"

extern "C" unsigned char data_100117a8[];
extern "C" unsigned char data_100117b8[];
extern "C" unsigned char data_100117b0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022f9758(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_020904f8(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022f9758(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100117a8;
            fn_030e9b44(self, (char*)self + 144, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100117b8;
        }
        fn_030e9d18(self, (char*)self + 148, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100117a8;
        key.string = (const char*)data_100117b0;
    }
    fn_030e9aa8(self, (char*)self + 152, &key);
}
