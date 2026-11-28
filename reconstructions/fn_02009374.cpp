extern "C" void fn_02af5bd4(void*);
extern "C" void fn_031984b4(void*, void*);

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" void fn_02009374(void *object) {
    fn_02af5bd4(object);
    void *target = ((void *(*)(void *))((VirtualObject*)object)->vtable[195])(object);
    if (target != 0) {
        void *flag = 0;
        if (((int (*)(void *))((VirtualObject*)object)->vtable[333])(object) != 0) {
            flag = (void *)1;
        }
        fn_031984b4(target, flag);
    }
}
