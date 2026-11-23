#include "botw/safe_string.h"

extern "C" unsigned char data_1018d050[];
extern "C" unsigned char data_1018d05c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" void fn_0314b334(void*, void*, void*);

extern "C" void fn_02a5334c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018d050;
        fn_0314b24c(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018d05c;
    }
    fn_0314b334(self, (char*)self + 20, &key);
}
