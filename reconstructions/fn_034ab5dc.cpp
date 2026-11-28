typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

extern "C" s32 data_102cb708;

namespace {
struct Object {
    s32 *vtable;
    char padding_4[0x28];
    void *first;
    char member[0xC];
    void *second;
};
}

extern "C" void fn_034ab5dc(void *object, u32 flags) {
    if (object != 0) {
        void *first = ((Object *)object)->first;
        ((Object *)object)->vtable = &data_102cb708;
        if (first != 0) {
            fn_0308e6d0(first);
            ((Object *)object)->first = 0;
        }
        void *second = ((Object *)object)->second;
        if (second != 0) {
            fn_0308e6d0(second);
            ((Object *)object)->second = 0;
        }
        fn_0333bcec(((Object *)object)->member, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
