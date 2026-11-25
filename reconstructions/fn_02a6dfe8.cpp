#include "botw/safe_string.h"

extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" unsigned char data_10193220[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02a6dfe8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10193220;
    }
    fn_0314b24c(self, (char*)self + 16, &key);
}
