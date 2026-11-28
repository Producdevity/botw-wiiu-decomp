#include "botw/safe_string.h"

extern "C" unsigned char data_10175734[];
extern "C" unsigned char data_10175758[];
extern "C" unsigned char data_10175744[];
extern "C" unsigned char data_10175770[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_026b40f0(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn02991a38Self {
    unsigned char base[124];
    void* params[4];
};

extern "C" void fn_02991a38(Fn02991a38Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_026b40f0(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10175734;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10175758;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10175744;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10175770;
    }
    fn_030e9be0(self, &self->params[3], k);
}
