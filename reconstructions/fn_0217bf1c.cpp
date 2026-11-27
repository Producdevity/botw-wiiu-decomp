typedef unsigned char u8;

extern "C" int fn_021d0df0(void*);

namespace {
struct Object {
    char padding_0[0x24];
    u8 disabled;
};
}

extern "C" u8 fn_0217bf1c(void *object) {
    Object *self = (Object *)object;

    int result = 0;

    if (self->disabled == 0 && fn_021d0df0(self) != 0) {
        result = 1;
    }
    return result;
}
