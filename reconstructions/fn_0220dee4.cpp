typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0220de2c(void*);

namespace {
struct Object {
    char padding_0[0xB];
    u8 flags;
    char padding_C[4];
    s32 *state;
};
}

extern "C" u8 fn_0220dee4(void *object) {
    Object *self = (Object *)object;
    s32 result = 1;

    if (!((self->flags >> 1) & 1) && (*self->state != 1 || fn_0220de2c(self) == 0)) {
        result = 0;
    }
    return result;
}
