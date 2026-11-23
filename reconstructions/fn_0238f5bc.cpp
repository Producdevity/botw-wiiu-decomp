#include "botw/safe_string.h"

extern "C" unsigned char data_100969dc[];
extern "C" unsigned char data_100969fc[];
extern "C" unsigned char data_100969ec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021405e4(void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);

extern "C" void fn_0238f5bc(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_021405e4(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100969dc;
            fn_030e9aa8(self, (char*)self + 124, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100969fc;
        }
        fn_030e9b44(self, (char*)self + 132, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100969dc;
        key.string = (const char*)data_100969ec;
    }
    fn_030e9be0(self, (char*)self + 136, &key);
}
