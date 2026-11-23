#include "botw/safe_string.h"

extern "C" unsigned char data_10160eb8[];
extern "C" unsigned char data_10160ecc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea1f4(void*, void*, void*);

extern "C" void fn_02907fb4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10160eb8;
        fn_030e9d18(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10160ecc;
    }
    fn_030ea1f4(self, (char*)self + 36, &key);
}
