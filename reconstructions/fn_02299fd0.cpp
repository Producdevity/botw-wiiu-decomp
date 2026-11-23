#include "botw/safe_string.h"

extern "C" unsigned char data_1006e900[];
extern "C" unsigned char data_1006e8f8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02296ae0(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02299fd0(void* self) {
    SafeString key;
    if (true) {
        fn_02296ae0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006e900;
        fn_030e9d18(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006e8f8;
    }
    fn_030e9aa8(self, (char*)self + 28, &key);
}
