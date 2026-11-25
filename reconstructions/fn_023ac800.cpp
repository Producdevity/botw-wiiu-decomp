#include "botw/safe_string.h"

extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" unsigned char data_1009d118[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_023ac800(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009d118;
    }
    fn_030e9ff4(self, (char*)self + 28, &key);
}
