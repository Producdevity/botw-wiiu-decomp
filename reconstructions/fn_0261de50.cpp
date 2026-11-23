#include "botw/safe_string.h"

extern "C" unsigned char data_100f88ac[];
extern "C" unsigned char data_100f88bc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0296693c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_0261de50(void* self) {
    SafeString key;
    if (true) {
        fn_0296693c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f88ac;
        fn_030e9be0(self, (char*)self + 56, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f88bc;
    }
    fn_030e9be0(self, (char*)self + 60, &key);
}
