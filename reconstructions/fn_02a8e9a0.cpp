#include "botw/safe_string.h"

extern "C" unsigned char data_1019ae08[];
extern "C" unsigned char data_1019ae00[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);

extern "C" void fn_02a8e9a0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1019ae08;
        fn_0314b24c(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1019ae00;
    }
    fn_0314b24c(self, (char*)self + 20, &key);
}
