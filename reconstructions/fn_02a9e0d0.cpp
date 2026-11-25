#include "botw/safe_string.h"

extern "C" void fn_0314b334(void*, void*, void*);
extern "C" unsigned char data_1019eb1c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02a9e0d0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1019eb1c;
    }
    fn_0314b334(self, (char*)self + 16, &key);
}
