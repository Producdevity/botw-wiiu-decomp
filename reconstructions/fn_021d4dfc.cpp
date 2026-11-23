#include "botw/safe_string.h"

extern "C" unsigned char data_10046ef8[];
extern "C" unsigned char data_10046eec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0245cc9c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_021d4dfc(void* self) {
    SafeString key;
    if (true) {
        fn_0245cc9c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10046ef8;
        fn_030e9be0(self, (char*)self + 52, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10046eec;
    }
    fn_030e9aa8(self, (char*)self + 56, &key);
}
