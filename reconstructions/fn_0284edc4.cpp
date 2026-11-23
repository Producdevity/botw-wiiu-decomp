#include "botw/safe_string.h"

extern "C" unsigned char data_10145c38[];
extern "C" unsigned char data_10145c40[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02851b98(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_0284edc4(void* self) {
    SafeString key;
    if (true) {
        fn_02851b98(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10145c38;
        fn_030e9be0(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10145c40;
    }
    fn_030e9be0(self, (char*)self + 64, &key);
}
