#include "botw/safe_string.h"

extern "C" unsigned char data_1002dec0[];
extern "C" unsigned char data_1002dedc[];
extern "C" unsigned char data_1002deec[];
extern "C" unsigned char data_1002deb0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct CreateEpona {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0214c99c(CreateEpona* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1002dec0;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002dedc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002deec;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002deb0;
    }
    fn_030e9be0(self, &self->params[3], k);
}
