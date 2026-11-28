extern "C" void fn_0339a0c4(void *);
extern "C" void fn_03458474(void*);
extern "C" void fn_03489294(void*, int);

namespace {
struct Target {
    char padding_0[0xF4];
    void* extra;
};
struct Owner {
    Target* target;
    char padding_4[0x18];
    void* resource;
};
}

extern "C" void fn_021d2674(void *object) {
    fn_0339a0c4(((Owner*)object)->target);
    void *resource = ((Owner*)object)->resource;
    if (resource != 0) {
        fn_03458474(resource);
    }
    Target *target = ((Owner*)object)->target;
    if (target != 0) {
        void *extra = target->extra;
        if (extra != 0) {
            fn_03489294(extra, 0);
        }
    }
}
