#include "botw/safe_string.h"

extern "C" unsigned char data_100b293c[];
extern "C" unsigned char data_100b2954[];
extern "C" unsigned char data_100b2944[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02309b98(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);

extern "C" void fn_0242afa4(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_02309b98(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100b293c;
            fn_030e9b44(self, (char*)self + 60, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100b2954;
        }
        fn_030e9be0(self, (char*)self + 64, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b293c;
        key.string = (const char*)data_100b2944;
    }
    fn_030e9be0(self, (char*)self + 68, &key);
}
