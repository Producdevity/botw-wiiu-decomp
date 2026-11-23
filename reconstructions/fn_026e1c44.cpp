#include "botw/safe_string.h"

extern "C" unsigned char data_101163b4[];
extern "C" unsigned char data_101163cc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025c6c6c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_026e1c44(void* self) {
    SafeString key;
    if (true) {
        fn_025c6c6c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101163b4;
        fn_030e9be0(self, (char*)self + 676, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101163cc;
    }
    fn_030ea0cc(self, (char*)self + 680, &key);
}
