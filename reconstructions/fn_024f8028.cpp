#include "botw/safe_string.h"

extern "C" unsigned char data_100cf74c[];
extern "C" unsigned char data_100cf75c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025989a4(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

struct AssassinCallSelect {
    unsigned char base[32];
    SafeString strings[2];
};

extern "C" void fn_024f8028(AssassinCallSelect* self) {
    SafeString key;
    fn_025989a4(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_100cf74c;
    if (true) {
        fn_030e9aa8(self, &self->strings[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cf75c;
    }
    fn_030e9aa8(self, &self->strings[1], &key);
}
