#include "botw/safe_string.h"

extern "C" unsigned char data_100b6754[];
extern "C" unsigned char data_100b6764[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02440eb4(void*, void*, void*);
extern "C" void fn_0244117c(void*, void*, void*);

extern "C" void fn_024445a4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6754;
        fn_02440eb4(self, (char*)self + 12, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6764;
    }
    fn_0244117c(self, (char*)self + 20, &key);
}
