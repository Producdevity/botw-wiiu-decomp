#include "botw/safe_string.h"

extern "C" unsigned char data_1013bf14[];
extern "C" unsigned char data_1013bf20[];
extern "C" unsigned char data_1013bf3c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0250cc00(void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);

extern "C" void fn_0280eab8(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_0250cc00(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013bf14;
            fn_030e9be0(self, (char*)self + 52, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013bf20;
        }
        fn_030e9b44(self, (char*)self + 56, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013bf14;
        key.string = (const char*)data_1013bf3c;
    }
    fn_030e9b44(self, (char*)self + 60, &key);
}
