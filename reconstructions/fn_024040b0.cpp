#include "botw/safe_string.h"

extern "C" unsigned char data_100aae90[];
extern "C" unsigned char data_100aae88[];
extern "C" unsigned char data_100aae9c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_020cdb04(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_024040b0(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_020cdb04(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100aae90;
            fn_030e9b44(self, (char*)self + 92, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100aae88;
        }
        fn_030e9aa8(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aae90;
        key.string = (const char*)data_100aae9c;
    }
    fn_030e9aa8(self, (char*)self + 104, &key);
}
