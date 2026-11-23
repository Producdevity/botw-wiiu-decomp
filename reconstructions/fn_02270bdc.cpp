#include "botw/safe_string.h"

extern "C" unsigned char data_10068aec[];
extern "C" unsigned char data_10068b00[];
extern "C" unsigned char data_10068af4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0226c240(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_02270bdc(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_0226c240(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10068aec;
            fn_030e9b44(self, (char*)self + 52, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10068b00;
        }
        fn_030e9aa8(self, (char*)self + 56, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068aec;
        key.string = (const char*)data_10068af4;
    }
    fn_030e9aa8(self, (char*)self + 64, &key);
}
