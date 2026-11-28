typedef int s32;

extern "C" void fn_0339a080(void *);
extern "C" void fn_0339a0c4(void *);

namespace {
struct Object {
    void *target;
    unsigned char padding_4[0x10];
    s32 *flag;
};
}

extern "C" s32 fn_0239c29c(void *object) {
    void *target;
    Object *self = static_cast<Object *>(object);

    target = self->target;
    if (*self->flag == 0) {
        fn_0339a0c4(target);
        return 1;
    }
    fn_0339a080(target);
    return 1;
}
