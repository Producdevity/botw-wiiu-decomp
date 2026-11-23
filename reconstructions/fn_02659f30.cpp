#include "botw/safe_string.h"

extern "C" unsigned char data_10101e44[];
extern "C" unsigned char data_10101e50[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea1ac(void*, void*, void*);

extern "C" void fn_02659f30(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10101e44;
        fn_030e9b44(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10101e50;
    }
    fn_030ea1ac(self, (char*)self + 36, &key);
}
