#include "botw/safe_string.h"

extern "C" unsigned char data_1017ec70[];
extern "C" unsigned char data_1017ec5c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029caa70(void* self);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029cbc88(void* self) {
    SafeString key;
    if (true) {
        fn_029caa70(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ec70;
        fn_030ff774(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ec5c;
    }
    fn_030ff740(self, (char*)self + 36, &key);
}
