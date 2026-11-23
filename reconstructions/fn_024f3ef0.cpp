#include "botw/safe_string.h"

extern "C" unsigned char data_100cedd8[];
extern "C" unsigned char data_100cede4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_024f6a10(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_024f3ef0(void* self) {
    SafeString key;
    if (true) {
        fn_024f6a10(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cedd8;
        fn_030e9b44(self, (char*)self + 436, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cede4;
    }
    fn_030e9b44(self, (char*)self + 440, &key);
}
