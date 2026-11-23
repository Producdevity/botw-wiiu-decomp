#include "botw/safe_string.h"

extern "C" unsigned char data_100583c4[];
extern "C" unsigned char data_100583d0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0221b388(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100583c4;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100583d0;
    }
    fn_030ea284(self, (char*)self + 20, &key);
}
