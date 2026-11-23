#include "botw/safe_string.h"

extern "C" unsigned char data_100179ec[];
extern "C" unsigned char data_100179f8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_020c68f4(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_020c5b08(void* self) {
    SafeString key;
    if (true) {
        fn_020c68f4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100179ec;
        fn_030e9b44(self, (char*)self + 56, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100179f8;
    }
    fn_030e9be0(self, (char*)self + 60, &key);
}
