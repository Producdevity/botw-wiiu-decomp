typedef int s32;

extern "C" int fn_020b89e8(void*);
extern "C" void fn_020b9610(void*);
extern "C" void fn_020b9920(void*);
extern "C" void fn_020b9a68(void*);

namespace {
struct Object {
    char padding_0[0x278];
    s32 flags;
};
}

extern "C" void fn_020b9c84(void *object) {
    ((Object *) object)->flags &= ~0x80;
    if (fn_020b89e8(object) != 0) {
        fn_020b9610(object);
        fn_020b9920(object);
        fn_020b9a68(object);
    }
}
