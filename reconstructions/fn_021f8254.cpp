#include "botw/safe_string.h"

extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" unsigned char data_1004f7dc[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_021f8254(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004f7dc;
    }
    fn_030e9c7c(self, (char*)self + 16, &key);
}
