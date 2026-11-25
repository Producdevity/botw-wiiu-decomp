#include "botw/safe_string.h"

extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" unsigned char data_101988a8[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02a84f84(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101988a8;
    }
    fn_0314b24c(self, (char*)self + 16, &key);
}
