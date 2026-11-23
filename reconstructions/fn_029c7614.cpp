#include "botw/safe_string.h"

extern "C" unsigned char data_1017ddb4[];
extern "C" unsigned char data_1017ddc0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff810(void*, void*, const SafeString*);
extern "C" void fn_030ff7a8(void*, void*, void*);

extern "C" void fn_029c7614(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ddb4;
        fn_030ff810(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ddc0;
    }
    fn_030ff7a8(self, (char*)self + 20, &key);
}
