#include "botw/safe_string.h"

extern "C" unsigned char data_1004c8dc[];
extern "C" unsigned char data_1004c8e4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_021e9730(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004c8dc;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004c8e4;
    }
    fn_030e9b44(self, (char*)self + 20, &key);
}
