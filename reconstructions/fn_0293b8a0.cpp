#include "botw/safe_string.h"

extern "C" unsigned char data_1016b3ec[];
extern "C" unsigned char data_1016b3d8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0293a11c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_0293b8a0(void* self) {
    SafeString key;
    if (true) {
        fn_0293a11c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016b3ec;
        fn_030e9be0(self, (char*)self + 136, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016b3d8;
    }
    fn_030e9be0(self, (char*)self + 140, &key);
}
