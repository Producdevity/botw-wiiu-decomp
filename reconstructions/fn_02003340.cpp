typedef int s32;

namespace {
struct Actor {
    char padding_0[0xE8];
    void *const *vtable;
    char padding_EC[0x878 - 0xEC];
    void *resource;
};
}

extern "C" void fn_02af6308(void*);
extern "C" void fn_03be1738(void*);

extern "C" void fn_02003340(void *object) {
    void *resource;
    void *const *vtable;
    fn_02af6308(object);
    resource = ((Actor *)object)->resource;
    if (resource != 0) {
        fn_03be1738(resource);
        ((Actor *)object)->resource = 0;
    }
    vtable = ((Actor *)object)->vtable;
    ((s32 (*)(void *))vtable[317])(object);
}
