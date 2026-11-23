#include "botw/safe_string.h"

extern "C" unsigned char data_10182be4[];
extern "C" unsigned char data_10182bf0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029dcc4c(void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029dc94c(void* self) {
    SafeString key;
    if (true) {
        fn_029dcc4c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10182be4;
        fn_030ff740(self, (char*)self + 80, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10182bf0;
    }
    fn_030ff740(self, (char*)self + 88, &key);
}
