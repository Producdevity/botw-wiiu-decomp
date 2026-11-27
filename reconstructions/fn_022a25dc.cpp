typedef unsigned char u8;

extern "C" int fn_02c1b38c(void*, void*);

namespace {
struct Object {
    void *target;
    char padding_4[0x1C];
    u8 *flag;
};
}

extern "C" u8 fn_022a25dc(void *object) {
    Object *self = (Object *)object;

    int result = 0;

    if (*self->flag != 0 && fn_02c1b38c(self->target, 0) != 0) {
        result = 1;
    }
    return result;
}
