#include "botw/safe_string.h"

extern "C" unsigned char data_10105904[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_026712e8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10105904;
    }
    fn_030e9ff4(self, (char*)self + 32, &key);
}
