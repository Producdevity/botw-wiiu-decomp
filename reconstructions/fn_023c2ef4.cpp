#include "botw/safe_string.h"

extern "C" unsigned char data_100a1114[];
extern "C" unsigned char data_100a1124[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_023c2ef4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a1114;
        fn_030e9be0(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a1124;
    }
    fn_030e9d18(self, (char*)self + 20, &key);
}
