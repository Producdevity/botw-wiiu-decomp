#include "botw/safe_string.h"

extern "C" unsigned char data_100cc59c[];
extern "C" unsigned char data_100cc5ac[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_024e3e70(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cc59c;
        fn_030e9be0(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cc5ac;
    }
    fn_030e9be0(self, (char*)self + 36, &key);
}
