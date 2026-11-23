#include "botw/safe_string.h"

extern "C" unsigned char data_1012a080[];
extern "C" unsigned char data_1012a090[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025117bc(void*);
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_02773040(void* self) {
    SafeString key;
    if (true) {
        fn_025117bc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012a080;
        fn_030ea03c(self, (char*)self + 108, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012a090;
    }
    fn_030ea03c(self, (char*)self + 112, &key);
}
