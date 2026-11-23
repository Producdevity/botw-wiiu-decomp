#include "botw/safe_string.h"

extern "C" unsigned char data_1013dc3c[];
extern "C" unsigned char data_1013dc54[];
extern "C" unsigned char data_1013dc34[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028162a4(void*);
extern "C" void fn_030ea23c(void *, void *, void *);
extern "C" void fn_030ea1f4(void *, void *, void *);

extern "C" void fn_0281a814(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_028162a4(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013dc3c;
            fn_030ea23c(self, (char*)self + 108, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1013dc54;
        }
        fn_030ea1f4(self, (char*)self + 112, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013dc3c;
        key.string = (const char*)data_1013dc34;
    }
    fn_030ea1f4(self, (char*)self + 116, &key);
}
