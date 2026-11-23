#include "botw/safe_string.h"

extern "C" unsigned char data_100aa55c[];
extern "C" unsigned char data_100aa568[];
extern "C" unsigned char data_100aa550[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023fea2c(void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_02401008(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_023fea2c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100aa55c;
            fn_030e9be0(self, (char*)self + 24, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100aa568;
        }
        fn_030e9aa8(self, (char*)self + 28, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aa55c;
        key.string = (const char*)data_100aa550;
    }
    fn_030e9aa8(self, (char*)self + 36, &key);
}
