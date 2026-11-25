#include "botw/safe_string.h"

extern "C" unsigned char data_10024370[];
extern "C" unsigned char data_100243a8[];
extern "C" unsigned char data_1002437c[];
extern "C" unsigned char data_10024390[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

struct BeamMove {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_021115a8(BeamMove* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10024370;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100243a8;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002437c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10024390;
    }
    fn_030ea23c(self, &self->params[3], &key);
}
