#include "botw/safe_string.h"

extern "C" unsigned char data_1000b844[];
extern "C" unsigned char data_1000b858[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_020680ac(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_0206ee54(void* self) {
    SafeString key;
    if (true) {
        fn_020680ac(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000b844;
        fn_030ea03c(self, (char*)self + 2004, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000b858;
    }
    fn_030ea0cc(self, (char*)self + 2008, &key);
}
