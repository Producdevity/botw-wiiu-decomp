#include "botw/safe_string.h"

extern "C" unsigned char data_100ce244[];
extern "C" unsigned char data_100ce258[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025daecc(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_024f0a28(void* self) {
    SafeString key;
    if (true) {
        fn_025daecc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce244;
        fn_030e9be0(self, (char*)self + 164, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce258;
    }
    fn_030e9aa8(self, (char*)self + 168, &key);
}
