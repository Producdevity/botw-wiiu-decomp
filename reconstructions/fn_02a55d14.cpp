#include "botw/safe_string.h"

extern "C" unsigned char data_1018da4c[];
extern "C" unsigned char data_1018da58[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b1c8(void*, void*, void*);
extern "C" void fn_0314b7f8(void*, void*, void*);

extern "C" void fn_02a55d14(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018da4c;
        fn_0314b1c8(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018da58;
    }
    fn_0314b7f8(self, (char*)self + 24, &key);
}
