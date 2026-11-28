typedef unsigned char u8;
typedef int s32;

extern "C" void fn_028c3be0(void*);

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable;
    char padding_10[0x381];
    u8 flag;
};
}

extern "C" void fn_028a9c10(void *object) {
    Object *self = (Object *) object;
    fn_028c3be0(object);
    if (self->flag == 0) {
        ((s32 (*)(void *)) self->vtable[85])(object);
    }
}
