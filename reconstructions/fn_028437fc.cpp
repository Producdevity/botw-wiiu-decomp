#include "botw/safe_string.h"

extern "C" unsigned char data_10143c30[];
extern "C" unsigned char data_10143c38[];
extern "C" unsigned char data_10143c40[];
extern "C" unsigned char data_10143c4c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027fea3c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" void fn_030ea1f4(void*, void*, void*);

struct Fn028437fcSelf {
    unsigned char base[36];
    void* params[4];
};

extern "C" void fn_028437fc(Fn028437fcSelf* self) {
    SafeString key;
    SafeString* k = &key;
    fn_027fea3c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10143c30;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10143c38;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10143c40;
    }
    if (true) {
        fn_030ea23c(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10143c4c;
    }
    fn_030ea1f4(self, &self->params[3], k);
}
