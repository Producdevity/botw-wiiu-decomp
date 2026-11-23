#include "botw/safe_string.h"

extern "C" unsigned char data_10182904[];
extern "C" unsigned char data_10182910[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029dc4fc(void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029dbd9c(void* self) {
    SafeString key;
    if (true) {
        fn_029dc4fc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10182904;
        fn_030ff740(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10182910;
    }
    fn_030ff740(self, (char*)self + 84, &key);
}
