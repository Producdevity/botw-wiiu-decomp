extern "C" void fn_03595f28(void *, unsigned);
extern "C" void fn_03596280(void*);
extern "C" void fn_03be1738(void*);

namespace {
struct Target {
    char padding_0[0x53C];
    void *resource;
};

struct Object {
    char padding_0[0x14];
    Target *target;
};
}

extern "C" void fn_0350b448(void *object) {
    void *resource;
    Target *target;

    target = ((Object *)object)->target;
    if (target != 0) {
        resource = target->resource;
        if (resource != 0) {
            fn_03596280(target);
            fn_03595f28(((Object *)object)->target, 0U);
            fn_03be1738(resource);
        }
    }
}
