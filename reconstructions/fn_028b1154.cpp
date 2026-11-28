#include "botw/safe_string.h"

extern "C" unsigned char data_1015556c[];
extern "C" unsigned char data_10155584[];
extern "C" unsigned char data_10155554[];
extern "C" unsigned char data_10155590[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028c65a8(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

struct Fn028b1154Self {
    unsigned char base[144];
    void* params[4];
};

extern "C" void fn_028b1154(Fn028b1154Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_028c65a8(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_1015556c;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10155584;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10155554;
    }
    if (true) {
        fn_030e9b44(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10155590;
    }
    fn_030e9aa8(self, &self->params[3], k);
}
