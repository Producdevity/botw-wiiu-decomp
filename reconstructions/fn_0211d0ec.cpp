#include "botw/safe_string.h"

extern "C" unsigned char data_10026b04[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_0211d0ec(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10026b04;
    }
    fn_030ea0cc(self, (char*)self + 16, &key);
}
