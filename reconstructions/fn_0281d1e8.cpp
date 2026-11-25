#include "botw/safe_string.h"

extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" unsigned char data_1013e368[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0281d1e8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013e368;
    }
    fn_030ea23c(self, (char*)self + 32, &key);
}
