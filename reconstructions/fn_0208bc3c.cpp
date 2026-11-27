typedef signed char s8;

extern "C" void fn_0211bd20(void*);
extern "C" void fn_0344bac4(void *);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    void *handle;
    char padding_4[0xD0];
    s8 flag;
};
}

extern "C" void fn_0208bc3c(void *arg0) {
    Object *object = (Object *)arg0;
    void *target;

    fn_0211bd20(object);
    object->flag = 0;
    target = fn_037966a8(object->handle);
    if (target != 0) {
        fn_0344bac4(target);
    }
}
