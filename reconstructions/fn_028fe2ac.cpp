#include "botw/safe_string.h"

extern "C" unsigned char data_1015ed70[];
extern "C" unsigned char data_1015ed80[];
extern "C" unsigned char data_1015ed8c[];
extern "C" unsigned char data_1015ed98[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

struct StalPartNormal {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_028fe2ac(StalPartNormal* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1015ed70;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015ed80;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015ed8c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015ed98;
    }
    fn_030e9c7c(self, &self->params[3], &key);
}
