#include "botw/safe_string.h"

extern "C" unsigned char data_100c7244[];
extern "C" unsigned char data_100c724c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_024beb4c(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_024c0220(void* self) {
    SafeString key;
    if (true) {
        fn_024beb4c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c7244;
        fn_030e9aa8(self, (char*)self + 224, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c724c;
    }
    fn_030e9c7c(self, (char*)self + 232, &key);
}
