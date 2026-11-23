#include "botw/safe_string.h"

extern "C" unsigned char data_100f9428[];
extern "C" unsigned char data_100f9418[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025cf6b0(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02621854(void* self) {
    SafeString key;
    if (true) {
        fn_025cf6b0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f9428;
        fn_030e9be0(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f9418;
    }
    fn_030e9d18(self, (char*)self + 44, &key);
}
