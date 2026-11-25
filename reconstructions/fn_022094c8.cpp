#include "botw/safe_string.h"

extern "C" unsigned char data_10053718[];
extern "C" unsigned char data_10053728[];
extern "C" unsigned char data_10053704[];
extern "C" unsigned char data_10053740[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

struct ForkGanonBeastWeakPoint {
    unsigned char base[24];
    void* params[4];
};

extern "C" void fn_022094c8(ForkGanonBeastWeakPoint* self) {
    SafeString key;
    SafeString* k = &key;
    fn_0221da1c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10053718;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10053728;
    }
    if (true) {
        fn_030ea23c(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10053704;
    }
    if (true) {
        fn_030ea284(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10053740;
    }
    fn_030ea284(self, &self->params[3], k);
}
