#include "botw/safe_string.h"

extern "C" unsigned char data_100e5c4c[];
extern "C" unsigned char data_100e5c3c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_02587c18(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e5c4c;
        fn_030e9ff4(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e5c3c;
    }
    fn_030ea03c(self, (char*)self + 36, &key);
}
