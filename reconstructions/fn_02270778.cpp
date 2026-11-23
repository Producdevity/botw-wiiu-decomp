#include "botw/safe_string.h"

extern "C" unsigned char data_10068954[];
extern "C" unsigned char data_1006895c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0210e63c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02270778(void* self) {
    SafeString key;
    if (true) {
        fn_0210e63c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068954;
        fn_030e9b44(self, (char*)self + 120, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006895c;
    }
    fn_030e9aa8(self, (char*)self + 124, &key);
}
