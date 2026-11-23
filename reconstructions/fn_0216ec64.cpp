#include "botw/safe_string.h"

extern "C" unsigned char data_100348f4[];
extern "C" unsigned char data_100348ec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02358bdc(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_0216ec64(void* self) {
    SafeString key;
    if (true) {
        fn_02358bdc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100348f4;
        fn_030e9c7c(self, (char*)self + 120, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100348ec;
    }
    fn_030e9c7c(self, (char*)self + 124, &key);
}
