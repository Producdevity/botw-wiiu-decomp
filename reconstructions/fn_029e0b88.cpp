#include "botw/safe_string.h"

extern "C" unsigned char data_10183a04[];
extern "C" unsigned char data_10183a0c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029c8a18(void *arg0);
extern "C" void fn_030ff7a8(void*, void*, void*);

extern "C" void fn_029e0b88(void* self) {
    SafeString key;
    if (true) {
        fn_029c8a18(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10183a04;
        fn_030ff7a8(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10183a0c;
    }
    fn_030ff7a8(self, (char*)self + 44, &key);
}
