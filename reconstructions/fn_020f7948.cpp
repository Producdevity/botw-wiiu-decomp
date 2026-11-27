typedef unsigned char u8;

extern "C" int fn_020f7874(void*);

namespace {
struct Object {
    char padding_0[0x88];
    u8 active;
};
}

extern "C" u8 fn_020f7948(void *object) {
    Object *self = (Object *)object;

    int result = 0;

    if (self->active != 0 && fn_020f7874(self) != 0) {
        result = 1;
    }
    return result;
}
