#include "botw/safe_string.h"

extern "C" unsigned char data_1029b280[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_0326ac80(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1029b280;
    }
    fn_030e9fac(self, (char*)self + 16, &key);
}
