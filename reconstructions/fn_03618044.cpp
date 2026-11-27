typedef signed char s8;

extern "C" void* fn_0308e578(unsigned);
struct FastMutexSection;
extern "C" FastMutexSection* fn_030bb49c(FastMutexSection *);

namespace {
struct Object {
    char padding_0[0x10];
    s8 enabled;
    char padding_11[3];
    char mutex[0x3C];
};
}

extern "C" void *fn_03618044(void *memory) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0x50U), ((object == 0) == 0))) {
        object->enabled = 1;
        fn_030bb49c((FastMutexSection *)object->mutex);
    }
    return object;
}
