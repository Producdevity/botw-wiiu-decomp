#include "botw/safe_string.h"

extern "C" unsigned char data_1007b344[];
extern "C" unsigned char data_1007b338[];
extern "C" unsigned char data_1007b354[];
extern "C" unsigned char data_1007b360[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct LynelRodeo {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_022ee7ac(LynelRodeo* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1007b344;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1007b338;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1007b354;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1007b360;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
