#include "botw/safe_string.h"

extern "C" void fn_030ff92c(void*, void*, void*);
extern "C" unsigned char data_1017e780[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029c9f94(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017e780;
    }
    fn_030ff92c(self, (char*)self + 20, &key);
}
