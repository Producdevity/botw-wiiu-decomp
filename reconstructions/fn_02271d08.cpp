#include "botw/safe_string.h"

extern "C" unsigned char data_10068fec[];
extern "C" unsigned char data_10068ff4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0243800c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02271d08(void* self) {
    SafeString key;
    if (true) {
        fn_0243800c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068fec;
        fn_030e9b44(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068ff4;
    }
    fn_030e9aa8(self, (char*)self + 100, &key);
}
