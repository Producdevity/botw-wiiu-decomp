#include "botw/safe_string.h"

extern "C" unsigned char data_100ef678[];
extern "C" unsigned char data_100ef690[];
extern "C" unsigned char data_100ef6ac[];
extern "C" unsigned char data_100ef66c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct EnemyPursuingAttackCheck {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_025d51ac(EnemyPursuingAttackCheck* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100ef678;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ef690;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ef6ac;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ef66c;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
