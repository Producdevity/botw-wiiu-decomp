#include "botw/safe_string.h"

extern "C" void fn_030ea164(void*, void*, void*);
extern "C" unsigned char data_101375ac[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_027ea20c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101375ac;
    }
    fn_030ea164(self, (char*)self + 32, &key);
}
