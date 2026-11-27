typedef int s32;

extern "C" void fn_03449d44(void*);

namespace {
struct Owner {
    char padding_0[0x50];
    void *resource;
    s32 flag;
};
}

extern "C" void fn_034bd40c(void *object) {
    Owner *owner = (Owner *)object;
    void *resource;

    resource = owner->resource;
    if (resource != 0) {
        fn_03449d44(resource);
        owner->resource = 0;
    }
    if ((s32) owner->flag != 0) {
        owner->flag = 0;
    }
}
