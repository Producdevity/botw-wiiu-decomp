#include "botw/safe_string.h"

extern "C" unsigned char data_1017f0f8[];
extern "C" unsigned char data_1017f100[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029cd640(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f0f8;
        fn_030ff7a8(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f100;
    }
    fn_030ff740(self, (char*)self + 24, &key);
}
