#include "botw/safe_string.h"

extern "C" unsigned char data_1004f67c[];
extern "C" unsigned char data_1004f684[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_021f7db4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004f67c;
        fn_030e9aa8(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004f684;
    }
    fn_030ea23c(self, (char*)self + 28, &key);
}
