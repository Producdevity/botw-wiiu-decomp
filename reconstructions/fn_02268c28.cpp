#include "botw/safe_string.h"

extern "C" unsigned char data_10066988[];
extern "C" unsigned char data_10066990[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02266eb0(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02268c28(void* self) {
    SafeString key;
    if (true) {
        fn_02266eb0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10066988;
        fn_030e9aa8(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10066990;
    }
    fn_030e9aa8(self, (char*)self + 48, &key);
}
