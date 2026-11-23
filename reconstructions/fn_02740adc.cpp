#include "botw/safe_string.h"

extern "C" unsigned char data_10121be4[];
extern "C" unsigned char data_10121bf4[];
extern "C" unsigned char data_10121c00[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025964c4(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_030ea164(void *, void *, void *);

extern "C" void fn_02740adc(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_025964c4(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10121be4;
            fn_030e9b44(self, (char*)self + 76, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10121bf4;
        }
        fn_030e9be0(self, (char*)self + 80, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10121be4;
        key.string = (const char*)data_10121c00;
    }
    fn_030ea164(self, (char*)self + 84, &key);
}
