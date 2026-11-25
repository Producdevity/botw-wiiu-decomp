#include "botw/safe_string.h"

extern "C" unsigned char data_1011fd68[];
extern "C" unsigned char data_1011fd40[];
extern "C" unsigned char data_1011fd74[];
extern "C" unsigned char data_1011fd58[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct LinkTagCheck {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_02730b98(LinkTagCheck* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1011fd68;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011fd40;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011fd74;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011fd58;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
