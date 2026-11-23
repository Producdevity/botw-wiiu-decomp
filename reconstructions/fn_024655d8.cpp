#include "botw/safe_string.h"

extern "C" unsigned char data_100bcbdc[];
extern "C" unsigned char data_100bcbd0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02466d68(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_024655d8(void* self) {
    SafeString key;
    if (true) {
        fn_02466d68(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bcbdc;
        fn_030e9b44(self, (char*)self + 92, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bcbd0;
    }
    fn_030e9d18(self, (char*)self + 96, &key);
}
