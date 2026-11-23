#include "botw/safe_string.h"

extern "C" unsigned char data_10075d4c[];
extern "C" unsigned char data_10075d30[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02425604(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_022c80fc(void* self) {
    SafeString key;
    if (true) {
        fn_02425604(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10075d4c;
        fn_030e9be0(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10075d30;
    }
    fn_030ea23c(self, (char*)self + 100, &key);
}
