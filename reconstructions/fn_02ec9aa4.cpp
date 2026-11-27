typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03c91c08(void*);

namespace {
struct Object {
    char padding_0[0x48];
    s32 type;
};
}

extern "C" u8 fn_02ec9aa4(void *object) {
    Object *self = (Object *)object;
    s32 result = 0;

    if (self->type == 7 && fn_03c91c08(self) == 2) {
        result = 1;
    }
    return result;
}
