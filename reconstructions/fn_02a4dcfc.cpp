#include "botw/safe_string.h"

extern "C" unsigned char data_1018bd64[];
extern "C" unsigned char data_1018bd4c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" void fn_0314b840(void*, void*, void*);

extern "C" void fn_02a4dcfc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018bd64;
        fn_0314b24c(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018bd4c;
    }
    fn_0314b840(self, (char*)self + 20, &key);
}
