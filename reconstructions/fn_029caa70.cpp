#include "botw/safe_string.h"

extern "C" unsigned char data_1017ea30[];
extern "C" unsigned char data_1017ea34[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_029caa70(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ea30;
        fn_030ff740(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ea34;
    }
    fn_030ff810(self, (char*)self + 20, &key);
}
