#include "botw/safe_string.h"

extern "C" unsigned char data_100f1cc0[];
extern "C" unsigned char data_100f1ccc[];
extern "C" unsigned char data_100f1cd8[];
extern "C" unsigned char data_100f1ce4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct EnemySearchHorse {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_025efa80(EnemySearchHorse* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100f1cc0;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f1ccc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f1cd8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f1ce4;
    }
    fn_030e9d18(self, &self->params[3], k);
}
