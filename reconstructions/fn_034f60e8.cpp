typedef int s32;

extern "C" void fn_034f602c(void*, void*);
extern "C" unsigned int fn_030c5d30(const char *);

namespace {
struct Vtable {
    char padding_0[0x1C];
    s32 (*slot_1c)(void *);
};
struct Source {
    const char *name;
    Vtable *vtable;
};
}

extern "C" void fn_034f60e8(void *object, void *source) {
    Vtable *vtable = ((Source *) source)->vtable;
    vtable->slot_1c(source);
    fn_034f602c(object, (void *) fn_030c5d30(((Source *) source)->name));
}
