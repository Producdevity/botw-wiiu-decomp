#include "botw/safe_string.h"

extern "C" unsigned char data_1016bc8c[];
extern "C" unsigned char data_1016bc78[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0255124c(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_0293f220(void* self) {
    SafeString key;
    if (true) {
        fn_0255124c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016bc8c;
        fn_030e9aa8(self, (char*)self + 136, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016bc78;
    }
    fn_030e9ff4(self, (char*)self + 144, &key);
}
