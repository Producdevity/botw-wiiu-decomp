#include "botw/safe_string.h"

extern "C" unsigned char data_101362dc[];
extern "C" unsigned char data_101362f0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_027e58c4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101362dc;
        fn_030e9d18(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101362f0;
    }
    fn_030e9aa8(self, (char*)self + 36, &key);
}
