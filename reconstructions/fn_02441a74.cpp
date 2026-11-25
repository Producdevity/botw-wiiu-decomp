#include "botw/safe_string.h"

extern "C" bool fn_02440edc(const void*, void*, const void*);
extern "C" unsigned char data_100b6038[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02441a74(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6038;
    }
    fn_02440edc(self, (char*)self + 12, &key);
}
