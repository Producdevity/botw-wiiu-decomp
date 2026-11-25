#include "botw/safe_string.h"

extern "C" void fn_02440ebc(void*, void*, void*);
extern "C" unsigned char data_100b621c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_024423e0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b621c;
    }
    fn_02440ebc(self, (char*)self + 12, &key);
}
