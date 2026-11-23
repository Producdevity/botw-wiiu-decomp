#include "botw/safe_string.h"

extern "C" unsigned char data_102b1394[];
extern "C" unsigned char data_102b138c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_03329040(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_102b1394;
        fn_030e9d18(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_102b138c;
    }
    fn_030e9aa8(self, (char*)self + 20, &key);
}
