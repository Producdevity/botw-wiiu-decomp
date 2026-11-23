#include "botw/safe_string.h"

extern "C" unsigned char data_100970b4[];
extern "C" unsigned char data_100970bc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_02391960(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100970b4;
        fn_030e9ff4(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100970bc;
    }
    fn_030ea03c(self, (char*)self + 20, &key);
}
