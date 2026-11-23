#include "botw/safe_string.h"

extern "C" unsigned char data_100cffac[];
extern "C" unsigned char data_100cffbc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_024fa9d8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cffac;
        fn_030e9b44(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cffbc;
    }
    fn_030e9b44(self, (char*)self + 36, &key);
}
