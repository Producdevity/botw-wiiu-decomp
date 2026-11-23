#include "botw/safe_string.h"

extern "C" unsigned char data_100cda98[];
extern "C" unsigned char data_100cda8c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028a340c(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_024ec928(void* self) {
    SafeString key;
    if (true) {
        fn_028a340c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cda98;
        fn_030e9aa8(self, (char*)self + 64, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cda8c;
    }
    fn_030e9be0(self, (char*)self + 60, &key);
}
