#include "botw/safe_string.h"

extern "C" unsigned char data_1000ad54[];
extern "C" unsigned char data_1000ad48[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_020680ac(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000ad54;
        fn_030ea03c(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000ad48;
    }
    fn_030ea0cc(self, (char*)self + 20, &key);
}
