#include "botw/safe_string.h"

extern "C" unsigned char data_1001da80[];
extern "C" unsigned char data_1001da90[];
extern "C" unsigned char data_1001da68[];
extern "C" unsigned char data_1001da60[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn020ed640Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_020ed640(Fn020ed640Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1001da80;
    if (true) {
        fn_030e9d18(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001da90;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001da68;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001da60;
    }
    fn_030e9aa8(self, &self->params[3], &key);
}
