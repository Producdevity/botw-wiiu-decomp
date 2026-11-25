#include "botw/safe_string.h"

extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" unsigned char data_100d3098[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0250c440(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d3098;
    }
    fn_030ea0cc(self, (char*)self + 128, &key);
}
