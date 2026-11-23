#include "botw/safe_string.h"

extern "C" unsigned char data_1018f418[];
extern "C" unsigned char data_1018f410[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);

extern "C" void fn_02a5d414(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018f418;
        fn_0314b24c(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018f410;
    }
    fn_0314b24c(self, (char*)self + 20, &key);
}
