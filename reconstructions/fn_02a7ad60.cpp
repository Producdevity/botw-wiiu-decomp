#include "botw/safe_string.h"

extern "C" unsigned char data_10196024[];
extern "C" unsigned char data_10196030[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b1c8(void*, void*, void*);

extern "C" void fn_02a7ad60(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10196024;
        fn_0314b1c8(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10196030;
    }
    fn_0314b1c8(self, (char*)self + 24, &key);
}
