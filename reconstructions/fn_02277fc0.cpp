#include "botw/safe_string.h"

extern "C" unsigned char data_10069f10[];
extern "C" unsigned char data_10069f08[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0226ca64(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02277fc0(void* self) {
    SafeString key;
    if (true) {
        fn_0226ca64(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10069f10;
        fn_030e9b44(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10069f08;
    }
    fn_030e9d18(self, (char*)self + 28, &key);
}
