#include "botw/safe_string.h"

extern "C" unsigned char data_101131a0[];
extern "C" unsigned char data_101131b0[];
extern "C" unsigned char data_10113194[];
extern "C" unsigned char data_10113174[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct IncredibleAction {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_026d0898(IncredibleAction* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101131a0;
    if (true) {
        fn_030e9d18(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101131b0;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10113194;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10113174;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
