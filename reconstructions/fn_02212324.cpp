#include "botw/safe_string.h"

extern "C" unsigned char data_10055930[];
extern "C" unsigned char data_1005593c[];
extern "C" unsigned char data_10055914[];
extern "C" unsigned char data_10055948[];
extern "C" unsigned char data_10055924[];
extern "C" unsigned char data_1005591c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct ForkLynelDrawWeapon {
    unsigned char base[16];
    void* params[6];
};

extern "C" void fn_02212324(ForkLynelDrawWeapon* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10055930;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005593c;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10055914;
    }
    if (true) {
        fn_030e9b44(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10055948;
    }
    if (true) {
        fn_030e9b44(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10055924;
    }
    if (true) {
        fn_030e9b44(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005591c;
    }
    fn_030e9aa8(self, &self->params[5], &key);
}
