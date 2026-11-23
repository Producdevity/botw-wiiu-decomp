#include "botw/safe_string.h"

extern "C" unsigned char data_1003a630[];
extern "C" unsigned char data_1003a61c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0218daa0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1003a630;
        fn_030e9ff4(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1003a61c;
    }
    fn_030ea284(self, (char*)self + 20, &key);
}
