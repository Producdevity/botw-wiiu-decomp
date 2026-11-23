#include "botw/safe_string.h"

extern "C" unsigned char data_1017fb34[];
extern "C" unsigned char data_1017fb40[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029d0998(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017fb34;
        fn_030ff740(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017fb40;
    }
    fn_030ff740(self, (char*)self + 28, &key);
}
