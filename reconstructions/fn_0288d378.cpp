#include "botw/safe_string.h"

extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" unsigned char data_1014eca4[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0288d378(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014eca4;
    }
    fn_030e9be0(self, (char*)self + 32, &key);
}
