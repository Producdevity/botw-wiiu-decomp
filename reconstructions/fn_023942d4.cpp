#include "botw/safe_string.h"

extern "C" unsigned char data_1009793c[];
extern "C" unsigned char data_10097908[];
extern "C" unsigned char data_10097950[];
extern "C" unsigned char data_10097918[];
extern "C" unsigned char data_1009792c[];
extern "C" unsigned char data_1009795c[];
extern "C" unsigned char data_1009796c[];
extern "C" unsigned char data_10097900[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct SandwormDamageJumpReaction {
    unsigned char base[16];
    void* params[8];
};

extern "C" void fn_023942d4(SandwormDamageJumpReaction* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1009793c;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10097908;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10097950;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10097918;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009792c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009795c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[5], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009796c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[6], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10097900;
    }
    fn_030e9aa8(self, &self->params[7], k);
}
