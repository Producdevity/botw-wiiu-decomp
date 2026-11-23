#include "botw/safe_string.h"

extern "C" unsigned char data_1004f4fc[];
extern "C" unsigned char data_1004f4e0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021f6598(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_021f7270(void* self) {
    SafeString key;
    if (true) {
        fn_021f6598(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004f4fc;
        fn_030ea164(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004f4e0;
    }
    fn_030ea23c(self, (char*)self + 28, &key);
}
