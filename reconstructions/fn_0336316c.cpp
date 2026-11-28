extern "C" unsigned int fn_0348609c(int);
extern "C" void fn_03489294(void*, int);
extern "C" void fn_0348dc74(void*);

namespace {
struct Object {
    char padding_0[8];
    int target;
    char padding_c[0x38];
    unsigned short flags;
};
}

extern "C" void fn_0336316c(void* object)
{
    unsigned int flags = ((Object *)object)->flags;
    flags &= ~0x10;
    ((Object *)object)->flags = flags;
    if (fn_0348609c(((Object *)object)->target) != 1) {
        fn_0348dc74((void *)((Object *)object)->target);
        fn_03489294((void *)((Object *)object)->target, 1);
    }
}
