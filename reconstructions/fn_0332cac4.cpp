#include "botw/safe_string.h"

extern "C" unsigned char data_102b1acc[];
extern "C" unsigned char data_102b1ad4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_0332cac4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_102b1acc;
        fn_030ff810(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_102b1ad4;
    }
    fn_030ff810(self, (char*)self + 24, &key);
}
