#include "botw/safe_string.h"

extern "C" unsigned char data_100fb354[];
extern "C" unsigned char data_100fb348[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_0262c014(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fb354;
        fn_030e9d18(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fb348;
    }
    fn_030e9fac(self, (char*)self + 36, &key);
}
