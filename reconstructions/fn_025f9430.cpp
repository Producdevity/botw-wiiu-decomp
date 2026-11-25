#include "botw/safe_string.h"

extern "C" unsigned char data_100f32f8[];
extern "C" unsigned char data_100f3304[];
extern "C" unsigned char data_100f3310[];
extern "C" unsigned char data_100f331c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02922440(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

struct EnemyTargetInAreaSelect {
    unsigned char base[36];
    void* params[4];
};

extern "C" void fn_025f9430(EnemyTargetInAreaSelect* self) {
    SafeString key;
    SafeString* k = &key;
    fn_02922440(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100f32f8;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f3304;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f3310;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f331c;
    }
    fn_030e9c7c(self, &self->params[3], k);
}
