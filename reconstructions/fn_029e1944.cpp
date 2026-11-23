#include "botw/safe_string.h"

extern "C" unsigned char data_10183bdc[];
extern "C" unsigned char data_10183bd4[];
extern "C" unsigned char data_10183bec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029df368(void *);
extern "C" void fn_030ff774(void *, void *, void *);
extern "C" void fn_030ff7a8(void *, void *, void *);

extern "C" void fn_029e1944(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_029df368(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10183bdc;
            fn_030ff774(self, (char*)self + 36, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10183bd4;
        }
        fn_030ff7a8(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10183bdc;
        key.string = (const char*)data_10183bec;
    }
    fn_030ff7a8(self, (char*)self + 44, &key);
}
