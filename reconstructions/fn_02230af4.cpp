#include "botw/safe_string.h"

extern "C" unsigned char data_1005ce40[];
extern "C" unsigned char data_1005ce2c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0222f33c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02230af4(void* self) {
    SafeString key;
    if (true) {
        fn_0222f33c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005ce40;
        fn_030e9be0(self, (char*)self + 140, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005ce2c;
    }
    fn_030e9be0(self, (char*)self + 144, &key);
}
