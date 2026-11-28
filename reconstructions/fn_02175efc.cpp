typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" s32 data_10036318;

namespace {
struct Object {
    char padding_0[4];
    char base[8];
    s32 *vtable;
    char padding_10[0x50];
    void *first;
    void *second;
};
}

extern "C" void fn_02175efc(void *object, u32 flags) {
    if (object != 0) {
        void *first = ((Object *)object)->first;
        ((Object *)object)->vtable = &data_10036318;
        if (first != 0) {
            fn_0308e6d0(first);
            ((Object *)object)->first = 0;
        }
        void *second = ((Object *)object)->second;
        if (second != 0) {
            fn_0308e6d0(second);
            ((Object *)object)->second = 0;
        }
        fn_030eb73c(((Object *)object)->base, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
