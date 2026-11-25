#include "botw/safe_string.h"

extern "C" unsigned char data_1001bb14[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_020dd5f4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001bb14;
    }
    fn_030ea0cc(self, (char*)self + 16, &key);
}
