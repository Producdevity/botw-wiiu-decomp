#include "botw/safe_string.h"

extern "C" unsigned char data_100bc82c[];
extern "C" unsigned char data_100bc820[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_024638e8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bc82c;
        fn_030e9aa8(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bc820;
    }
    fn_030e9aa8(self, (char*)self + 24, &key);
}
