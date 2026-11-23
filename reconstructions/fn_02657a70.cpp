#include "botw/safe_string.h"

extern "C" unsigned char data_101015e8[];
extern "C" unsigned char data_101015dc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028e85b4(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02657a70(void* self) {
    SafeString key;
    if (true) {
        fn_028e85b4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101015e8;
        fn_030e9be0(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101015dc;
    }
    fn_030e9aa8(self, (char*)self + 64, &key);
}
