#include "botw/safe_string.h"

extern "C" unsigned char data_101680c4[];
extern "C" unsigned char data_101680cc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02919b40(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02929fe4(void* self) {
    SafeString key;
    if (true) {
        fn_02919b40(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101680c4;
        fn_030e9be0(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101680cc;
    }
    fn_030e9aa8(self, (char*)self + 40, &key);
}
