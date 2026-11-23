#include "botw/safe_string.h"

extern "C" unsigned char data_101809f0[];
extern "C" unsigned char data_101809f8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_029d4968(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101809f0;
        fn_030ff810(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101809f8;
    }
    fn_030ff810(self, (char*)self + 24, &key);
}
