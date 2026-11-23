#include "botw/safe_string.h"

extern "C" unsigned char data_1013ef50[];
extern "C" unsigned char data_1013ef5c[];
extern "C" unsigned char data_1013ef70[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027fea3c(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);

extern "C" void fn_02822374(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_027fea3c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013ef50;
            fn_030e9b44(self, (char*)self + 36, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013ef5c;
        }
        fn_030e9d18(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013ef50;
        key.string = (const char*)data_1013ef70;
    }
    fn_030e9d18(self, (char*)self + 44, &key);
}
