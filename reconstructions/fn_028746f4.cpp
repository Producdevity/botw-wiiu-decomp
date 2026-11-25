#include "botw/safe_string.h"

extern "C" unsigned char data_1014afc8[];
extern "C" unsigned char data_1014afb0[];
extern "C" unsigned char data_1014afe4[];
extern "C" unsigned char data_1014affc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct ReturnFromReactionSelect {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_028746f4(ReturnFromReactionSelect* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1014afc8;
    if (true) {
        fn_030e9d18(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014afb0;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014afe4;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014affc;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
