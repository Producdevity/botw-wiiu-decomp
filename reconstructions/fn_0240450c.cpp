#include "botw/safe_string.h"

extern "C" unsigned char data_100ab074[];
extern "C" unsigned char data_100ab06c[];
extern "C" unsigned char data_100ab080[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022c587c(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_0240450c(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022c587c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100ab074;
            fn_030e9b44(self, (char*)self + 36, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100ab06c;
        }
        fn_030e9aa8(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ab074;
        key.string = (const char*)data_100ab080;
    }
    fn_030e9aa8(self, (char*)self + 48, &key);
}
