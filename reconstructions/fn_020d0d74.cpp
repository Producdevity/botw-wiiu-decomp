#include "botw/safe_string.h"

extern "C" unsigned char data_10019878[];
extern "C" unsigned char data_10019884[];
extern "C" unsigned char data_10019894[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022fac6c(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);

extern "C" void fn_020d0d74(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022fac6c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10019878;
            fn_030e9b44(self, (char*)self + 44, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10019884;
        }
        fn_030e9be0(self, (char*)self + 48, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10019878;
        key.string = (const char*)data_10019894;
    }
    fn_030e9d18(self, (char*)self + 52, &key);
}
