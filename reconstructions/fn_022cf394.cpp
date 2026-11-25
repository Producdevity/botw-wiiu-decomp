#include "botw/safe_string.h"

extern "C" unsigned char data_100771f8[];
extern "C" unsigned char data_10077204[];
extern "C" unsigned char data_10077224[];
extern "C" unsigned char data_10077214[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct LastBossChemicalPillarAttack {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_022cf394(LastBossChemicalPillarAttack* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100771f8;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10077204;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10077224;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10077214;
    }
    fn_030e9be0(self, &self->params[3], k);
}
