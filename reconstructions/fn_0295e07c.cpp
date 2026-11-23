#include "botw/safe_string.h"

extern "C" unsigned char data_1016e044[];
extern "C" unsigned char data_1016e034[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_0295e07c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016e044;
        fn_030ea03c(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016e034;
    }
    fn_030ea03c(self, (char*)self + 36, &key);
}
