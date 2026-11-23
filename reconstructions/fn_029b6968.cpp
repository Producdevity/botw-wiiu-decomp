#include "botw/safe_string.h"

extern "C" unsigned char data_1017aeb4[];
extern "C" unsigned char data_1017aec8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_029b6968(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017aeb4;
        fn_030ff740(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017aec8;
    }
    fn_030ff810(self, (char*)self + 20, &key);
}
