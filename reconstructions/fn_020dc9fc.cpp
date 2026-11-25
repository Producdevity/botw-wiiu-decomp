#include "botw/safe_string.h"

extern "C" void fn_030e9fac(void*, void*, void*);
extern "C" unsigned char data_1001b688[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_020dc9fc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001b688;
    }
    fn_030e9fac(self, (char*)self + 56, &key);
}
