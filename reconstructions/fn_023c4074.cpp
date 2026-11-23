#include "botw/safe_string.h"

extern "C" unsigned char data_100a1508[];
extern "C" unsigned char data_100a151c[];
extern "C" unsigned char data_100a1530[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022566f0(void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" void fn_030e9c7c(void *, void *, void *);

extern "C" void fn_023c4074(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022566f0(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100a1508;
            fn_030e9d18(self, (char*)self + 260, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100a151c;
        }
        fn_030e9c7c(self, (char*)self + 264, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a1508;
        key.string = (const char*)data_100a1530;
    }
    fn_030e9c7c(self, (char*)self + 268, &key);
}
