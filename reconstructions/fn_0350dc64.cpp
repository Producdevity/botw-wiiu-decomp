#include "botw/safe_string.h"

extern "C" unsigned char data_102d3b98[];
extern "C" unsigned char data_102d3ba8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_0350dc64(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_102d3b98;
        fn_030ea03c(self, (char*)self + 28, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_102d3ba8;
    }
    fn_030ea0cc(self, (char*)self + 32, &key);
}
