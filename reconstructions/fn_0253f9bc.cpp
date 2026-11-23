#include "botw/safe_string.h"

extern "C" unsigned char data_100d9efc[];
extern "C" unsigned char data_100d9f0c[];
extern "C" unsigned char data_100d9f1c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0297d4a4(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);

extern "C" void fn_0253f9bc(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_0297d4a4(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100d9efc;
            fn_030e9b44(self, (char*)self + 192, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100d9f0c;
        }
        fn_030e9be0(self, (char*)self + 196, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d9efc;
        key.string = (const char*)data_100d9f1c;
    }
    fn_030e9be0(self, (char*)self + 200, &key);
}
