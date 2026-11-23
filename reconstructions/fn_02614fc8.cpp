#include "botw/safe_string.h"

extern "C" unsigned char data_100f7004[];
extern "C" unsigned char data_100f7018[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_02614fc8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f7004;
        fn_030e9be0(self, (char*)self + 128, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f7018;
    }
    fn_030ea0cc(self, (char*)self + 132, &key);
}
