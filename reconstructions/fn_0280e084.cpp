#include "botw/safe_string.h"

extern "C" unsigned char data_1013bc80[];
extern "C" unsigned char data_1013bc8c[];
extern "C" unsigned char data_1013bc9c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027fea3c(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_030ea23c(void *, void *, void *);

extern "C" void fn_0280e084(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_027fea3c(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013bc80;
            fn_030e9b44(self, (char*)self + 80, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013bc8c;
        }
        fn_030e9be0(self, (char*)self + 84, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013bc80;
        key.string = (const char*)data_1013bc9c;
    }
    fn_030ea23c(self, (char*)self + 88, &key);
}
