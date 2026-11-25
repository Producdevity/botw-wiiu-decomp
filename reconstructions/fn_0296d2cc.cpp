#include "botw/safe_string.h"

extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" unsigned char data_101707a0[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0296d2cc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101707a0;
    }
    fn_030ea03c(self, (char*)self + 32, &key);
}
