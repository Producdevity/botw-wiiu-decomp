typedef unsigned char u8;
typedef int s32;

extern "C" int fn_030c65f0(void*);

namespace {
struct Object {
    char padding_0[8];
    s32 count;
};
}

extern "C" u8 fn_030c73b4(void *object) {
    Object *self = (Object *)object;
    s32 result = 1;

    if (self->count == 0 && fn_030c65f0(self) == 0) {
        result = 0;
    }
    return result;
}
