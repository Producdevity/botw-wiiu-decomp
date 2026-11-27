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

extern "C" s32 fn_0239c29c(void *arg0) {
    void *target;
    Object *object = (Object *)arg0;

    target = object->target;
    if (*object->flag == 0) {
        fn_0339a0c4(target);
        return 1;
    }
    fn_0339a080(target);
    return 1;
}
