#include "botw/safe_string.h"

extern "C" unsigned char data_100d8ce0[];
extern "C" unsigned char data_100d8cec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_025392ec(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d8ce0;
        fn_030e9ff4(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d8cec;
    }
    fn_030ea03c(self, (char*)self + 36, &key);
}
