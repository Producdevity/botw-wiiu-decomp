typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02de42bc(void*, int);

namespace {
struct Context {
    char padding_0[0x1298];
    void *manager;
};

struct Object {
    Context *context;
    char padding_4[0xC];
    u8 forced;
};
}

extern "C" u8 fn_02cd4b68(void *object) {
    Object *self = (Object *)object;
    s32 result = 1;

    if (self->forced == 0 && fn_02de42bc(self->context->manager, 2) == 0) {
        result = 0;
    }
    return result;
}
