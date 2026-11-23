#include "botw/safe_string.h"

extern "C" unsigned char data_101845e8[];
extern "C" unsigned char data_101845e0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029e4518(void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" void fn_030ff7dc(void*, void*, void*);

extern "C" void fn_029e4ae4(void* self) {
    SafeString key;
    if (true) {
        fn_029e4518(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101845e8;
        fn_030ff740(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101845e0;
    }
    fn_030ff7dc(self, (char*)self + 68, &key);
}
