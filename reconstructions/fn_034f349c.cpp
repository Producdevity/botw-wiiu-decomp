typedef int s32;

extern "C" int fn_03a64738(void*, void*);

namespace {
struct First {
    char padding_0[4];
    void *value;
};
struct Second {
    void *value;
    void *const *vtable;
};
}

extern "C" s32 fn_034f349c(void *first, void *second) {
    ((s32 (*)(void *)) ((Second *) second)->vtable[7])(second);
    return fn_03a64738(((First *) first)->value, ((Second *) second)->value) != 0;
}
