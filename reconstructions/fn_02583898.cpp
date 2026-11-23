#include "botw/safe_string.h"

extern "C" unsigned char data_100e5118[];
extern "C" unsigned char data_100e5110[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_02583898(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e5118;
        fn_030ea03c(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e5110;
    }
    fn_030ea03c(self, (char*)self + 36, &key);
}
