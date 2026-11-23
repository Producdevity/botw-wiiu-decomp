#include "botw/safe_string.h"

extern "C" unsigned char data_102a7d70[];
extern "C" unsigned char data_102a7d68[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_032c8858(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_102a7d70;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_102a7d68;
    }
    fn_030e9aa8(self, (char*)self + 20, &key);
}
