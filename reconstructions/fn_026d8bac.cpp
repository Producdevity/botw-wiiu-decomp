#include "botw/safe_string.h"

extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" unsigned char data_10114d98[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_026d8bac(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10114d98;
    }
    fn_030e9b44(self, (char*)self + 32, &key);
}
