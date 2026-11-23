#include "botw/safe_string.h"

extern "C" unsigned char data_1011808c[];
extern "C" unsigned char data_10118078[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_026ea780(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011808c;
        fn_030ea0cc(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10118078;
    }
    fn_030ea0cc(self, (char*)self + 36, &key);
}
