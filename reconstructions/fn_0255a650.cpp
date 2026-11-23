#include "botw/safe_string.h"

extern "C" unsigned char data_100de7e8[];
extern "C" unsigned char data_100de7c8[];
extern "C" unsigned char data_100de7dc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_026dbf40(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);

extern "C" void fn_0255a650(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_026dbf40(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100de7e8;
            fn_030e9b44(self, (char*)self + 104, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100de7c8;
        }
        fn_030e9be0(self, (char*)self + 108, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100de7e8;
        key.string = (const char*)data_100de7dc;
    }
    fn_030e9d18(self, (char*)self + 112, &key);
}
