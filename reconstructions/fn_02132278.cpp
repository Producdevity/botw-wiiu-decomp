#include "botw/safe_string.h"

extern "C" unsigned char data_100290fc[];
extern "C" unsigned char data_100290f0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02232514(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02132278(void* self) {
    SafeString key;
    if (true) {
        fn_02232514(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100290fc;
        fn_030e9be0(self, (char*)self + 64, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100290f0;
    }
    fn_030e9aa8(self, (char*)self + 68, &key);
}
