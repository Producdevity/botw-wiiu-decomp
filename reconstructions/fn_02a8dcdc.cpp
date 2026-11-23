#include "botw/safe_string.h"

extern "C" unsigned char data_1019ab08[];
extern "C" unsigned char data_1019ab10[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" void fn_0314b1c8(void*, void*, void*);

extern "C" void fn_02a8dcdc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1019ab08;
        fn_0314b24c(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1019ab10;
    }
    fn_0314b1c8(self, (char*)self + 20, &key);
}
