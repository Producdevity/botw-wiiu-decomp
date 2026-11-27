typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0378da88(void *);

namespace {
struct Object {
    char padding_0[0x14];
    char member[0x2C];
    s32 state;
};
}

extern "C" u8 fn_02a3ff00(void *object) {
    Object *self = (Object *)object;
    s32 result = 0;

    if (self->state != 1 && fn_0378da88(self->member) != 0) {
        result = 1;
    }
    return result;
}
