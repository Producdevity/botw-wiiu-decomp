typedef int s32;

extern "C" unsigned char fn_02efc068(void *);
extern "C" void fn_02f60e48(void*);

namespace {
struct Object {
    char padding_0[0x1B68];
    s32 manager;
};
}

extern "C" void fn_02f60f4c(void *object) {
    s32 manager;

    manager = ((Object *)object)->manager;
    if ((manager != 0) && (fn_02efc068((void *)(manager + 0x484)) != 0)) {
        fn_02f60e48(object);
    }
}
