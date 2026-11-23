#include "botw/safe_string.h"

extern "C" unsigned char data_1013b5bc[];
extern "C" unsigned char data_1013b5d0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0280c03c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013b5bc;
        fn_030ea164(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013b5d0;
    }
    fn_030ea284(self, (char*)self + 36, &key);
}
