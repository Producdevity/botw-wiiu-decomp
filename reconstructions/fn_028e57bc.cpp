typedef unsigned char u8;

extern "C" int fn_0253e5b4(void*);

namespace {
struct Object {
    char padding_0[0xB0];
    u8 active;
};
}

extern "C" u8 fn_028e57bc(void *object) {
    Object *self = (Object *)object;

    int result = 0;

    if (self->active != 0 && fn_0253e5b4(self) != 0) {
        result = 1;
    }
    return result;
}
