#include "botw/safe_string.h"

extern "C" unsigned char data_100a75b4[];
extern "C" unsigned char data_100a75ac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022c4434(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_023ec1a0(void* self) {
    SafeString key;
    if (true) {
        fn_022c4434(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a75b4;
        fn_030e9d18(self, (char*)self + 140, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a75ac;
    }
    fn_030e9aa8(self, (char*)self + 144, &key);
}
