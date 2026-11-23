#include "botw/safe_string.h"

extern "C" unsigned char data_101114e8[];
extern "C" unsigned char data_101114f4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025964c4(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_026c4af4(void* self) {
    SafeString key;
    if (true) {
        fn_025964c4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101114e8;
        fn_030e9b44(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101114f4;
    }
    fn_030e9be0(self, (char*)self + 80, &key);
}
