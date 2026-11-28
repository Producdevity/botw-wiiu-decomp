extern "C" void fn_028a4f60(void*);
extern "C" void fn_037b8798(void *, void *, int, int, void *);

namespace {
struct Object {
    char padding_0[0x80];
    unsigned char *kind_first;
    unsigned char *kind_second;
    void *handle_first;
    void *const *vtable_first;
    void *handle_second;
    void *const *vtable_second;
    unsigned char use_first;
};
}

extern "C" void fn_027e8f7c(void *object) {
    fn_028a4f60(object);
    if (((Object *)object)->use_first != 0) {
        ((int (*)(void *))((Object *)object)->vtable_first[7])(&((Object *)object)->handle_first);
        fn_037b8798(object, ((Object *)object)->handle_first, *((Object *)object)->kind_first, 0, 0);
        ((Object *)object)->use_first = 0;
        return;
    }
    ((int (*)(void *))((Object *)object)->vtable_second[7])(&((Object *)object)->handle_second);
    fn_037b8798(object, ((Object *)object)->handle_second, *((Object *)object)->kind_second, 0, 0);
}
