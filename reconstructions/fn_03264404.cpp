#include "botw/safe_string.h"

extern "C" void fn_030ea164(void*, void*, void*);
extern "C" unsigned char data_1029a098[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_03264404(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1029a098;
    }
    fn_030ea164(self, (char*)self + 16, &key);
}
