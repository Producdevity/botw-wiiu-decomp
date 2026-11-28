#include "botw/safe_string.h"

extern "C" unsigned char data_10076948[];
extern "C" unsigned char data_10076940[];
extern "C" unsigned char data_10076950[];
extern "C" unsigned char data_1007696c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02421aa8(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn022cc3e4Self {
    unsigned char base[72];
    void* params[4];
};

extern "C" void fn_022cc3e4(void* object) {
    Fn022cc3e4Self* self = static_cast<Fn022cc3e4Self*>(object);
    SafeString key;
    SafeString* k = &key;
    fn_02421aa8(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10076948;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10076940;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10076950;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1007696c;
    }
    fn_030e9d18(self, &self->params[3], k);
}
