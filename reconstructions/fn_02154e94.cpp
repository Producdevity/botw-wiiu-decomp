#include "botw/safe_string.h"

extern "C" unsigned char data_1002f9f0[];
extern "C" unsigned char data_1002f9e8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02154e94(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002f9f0;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002f9e8;
    }
    fn_030e9d18(self, (char*)self + 20, &key);
}
