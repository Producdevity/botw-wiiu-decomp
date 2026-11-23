#include "botw/safe_string.h"

extern "C" unsigned char data_10135610[];
extern "C" unsigned char data_10135618[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_027e2b04(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10135610;
        fn_030ea0cc(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10135618;
    }
    fn_030ea23c(self, (char*)self + 36, &key);
}
