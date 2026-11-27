extern "C" void fn_0344a064(void);
extern "C" void fn_03485e4c(void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Owner {
    char padding_0[0xF4];
    void *child;
};
}

extern "C" void fn_0339d744(void *object) {
    Owner *owner = (Owner *)object;
    void *child;

    if (fn_037966a8(owner) != 0) {
        fn_0344a064();
        return;
    }
    child = owner->child;
    if (child != 0) {
        fn_03485e4c(child);
    }
}
