#include "botw/safe_string.h"

extern "C" bool fn_030ff84c(const void*, void*, const void*);
extern "C" unsigned char data_101788e0[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029ad90c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101788e0;
    }
    fn_030ff84c(self, (char*)self + 40, &key);
}
