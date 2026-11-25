#include "botw/safe_string.h"

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" unsigned char data_1013c2ec[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0280f878(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013c2ec;
    }
    fn_030ea284(self, (char*)self + 32, &key);
}
