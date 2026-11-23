#include "botw/safe_string.h"

extern "C" unsigned char data_10038c64[];
extern "C" unsigned char data_10038c78[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_021846ac(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10038c64;
        fn_030ea164(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10038c78;
    }
    fn_030ea284(self, (char*)self + 20, &key);
}
