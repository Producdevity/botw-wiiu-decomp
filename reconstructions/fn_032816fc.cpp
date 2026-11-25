#include "botw/safe_string.h"

extern "C" void fn_030e9fac(void*, void*, void*);
extern "C" unsigned char data_1029f608[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_032816fc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1029f608;
    }
    fn_030e9fac(self, (char*)self + 28, &key);
}
