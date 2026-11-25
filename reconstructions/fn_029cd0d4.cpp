#include "botw/safe_string.h"

extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" unsigned char data_1017eff0[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029cd0d4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017eff0;
    }
    fn_030ff740(self, (char*)self + 20, &key);
}
