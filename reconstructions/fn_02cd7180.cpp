#include "botw/safe_string.h"

extern "C" unsigned char data_101d8b0c[];
extern "C" unsigned char data_101d8b20[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02cd7180(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8b0c;
        fn_030e9be0(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101d8b20;
    }
    fn_030e9be0(self, (char*)self + 24, &key);
}
