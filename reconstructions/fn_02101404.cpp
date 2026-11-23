#include "botw/safe_string.h"

extern "C" unsigned char data_10021280[];
extern "C" unsigned char data_10021288[];
extern "C" unsigned char data_10021298[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02102ec4(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_030ea084(void *, void *, void *);

extern "C" void fn_02101404(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_02102ec4(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10021280;
            fn_030e9be0(self, (char*)self + 148, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10021288;
        }
        fn_030e9aa8(self, (char*)self + 152, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10021280;
        key.string = (const char*)data_10021298;
    }
    fn_030ea084(self, (char*)self + 160, &key);
}
