#include "botw/safe_string.h"

extern "C" unsigned char data_1005a9e0[];
extern "C" unsigned char data_1005a9ec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02225ab0(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_02225540(void* self) {
    SafeString key;
    if (true) {
        fn_02225ab0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005a9e0;
        fn_030e9b44(self, (char*)self + 28, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005a9ec;
    }
    fn_030e9b44(self, (char*)self + 32, &key);
}
