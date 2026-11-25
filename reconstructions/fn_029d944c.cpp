#include "botw/safe_string.h"

extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" unsigned char data_10181fb0[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029d944c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10181fb0;
    }
    fn_030ff7a8(self, (char*)self + 20, &key);
}
