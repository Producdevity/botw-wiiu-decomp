#include "botw/safe_string.h"

extern "C" unsigned char data_1005cc04[];
extern "C" unsigned char data_1005cc18[];
extern "C" unsigned char data_1005cc34[];
extern "C" unsigned char data_1005cc50[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0222f33c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn0222fcdcSelf {
    unsigned char base[152];
    void* params[4];
};

extern "C" void fn_0222fcdc(Fn0222fcdcSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_0222f33c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_1005cc04;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005cc18;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005cc34;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005cc50;
    }
    fn_030e9d18(self, &self->params[3], k);
}
