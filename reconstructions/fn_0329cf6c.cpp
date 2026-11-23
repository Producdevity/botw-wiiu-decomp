#include "botw/safe_string.h"

extern "C" unsigned char data_102a2b6c[];
extern "C" unsigned char data_102a2b60[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_0329cf6c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_102a2b6c;
        fn_030ff774(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_102a2b60;
    }
    fn_030ff740(self, (char*)self + 24, &key);
}
