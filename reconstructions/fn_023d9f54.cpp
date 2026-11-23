#include "botw/safe_string.h"

extern "C" unsigned char data_100a454c[];
extern "C" unsigned char data_100a4554[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_023d9f54(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a454c;
        fn_030e9ff4(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a4554;
    }
    fn_030ea284(self, (char*)self + 20, &key);
}
