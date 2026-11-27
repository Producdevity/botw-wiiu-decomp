extern "C" bool fn_0378da88(void *);

namespace {
struct Object {
    char padding_0[0x18];
    char member[1];
    char padding_19[0xB];
    int state;
};
}

extern "C" unsigned char fn_0360ab8c(void *object) {
    Object *self = (Object *)object;
    int result = 1;

    if (self->state == 6 && fn_0378da88(self->member) == 0) {
        result = 0;
    }
    return result;
}
