#include "botw/safe_string.h"

extern "C" unsigned char data_100ce064[];
extern "C" unsigned char data_100ce06c[];
extern "C" unsigned char data_100ce07c[];
extern "C" unsigned char data_100ce088[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct AssassinBossFirstBattleMove {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_024efbc0(AssassinBossFirstBattleMove* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100ce064;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce06c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce07c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce088;
    }
    fn_030e9aa8(self, &self->params[3], &key);
}
