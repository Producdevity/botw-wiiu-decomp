#include "botw/safe_string.h"

extern "C" unsigned char data_10080c68[];
extern "C" unsigned char data_10080c5c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023fe630(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02309b98(void* self) {
    SafeString key;
    if (true) {
        fn_023fe630(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10080c68;
        fn_030e9be0(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10080c5c;
    }
    fn_030e9be0(self, (char*)self + 40, &key);
}
