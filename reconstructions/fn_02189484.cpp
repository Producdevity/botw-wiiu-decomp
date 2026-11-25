#include "botw/safe_string.h"

extern "C" void fn_030ea1f4(void*, void*, void*);
extern "C" unsigned char data_10039a70[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02189484(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10039a70;
    }
    fn_030ea1f4(self, (char*)self + 16, &key);
}
