#include "botw/safe_string.h"

extern "C" unsigned char data_101437a4[];
extern "C" unsigned char data_101437b8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027fea3c(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_0284172c(void* self) {
    SafeString key;
    if (true) {
        fn_027fea3c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101437a4;
        fn_030ea164(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101437b8;
    }
    fn_030ea23c(self, (char*)self + 40, &key);
}
