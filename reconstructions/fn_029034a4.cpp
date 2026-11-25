#include "botw/safe_string.h"

extern "C" unsigned char data_1015ff04[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_029034a4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015ff04;
    }
    fn_030e9c7c(self, (char*)self + 32, &key);
}
