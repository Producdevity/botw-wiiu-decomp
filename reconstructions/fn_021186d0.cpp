#include "botw/safe_string.h"

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" unsigned char data_10025d20[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_021186d0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10025d20;
    }
    fn_030ea284(self, (char*)self + 16, &key);
}
