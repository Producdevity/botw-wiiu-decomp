extern "C" void fn_023fe96c(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

namespace {
typedef void (*Method)(void *);

struct Object {
    char padding_0[0x18];
    char block_18[8];
    Method *vtable;
};
}

extern "C" void fn_02424c38(void *object) {
    fn_023fe96c(object);
    ((Object *)object)->vtable[19](((Object *)object)->block_18);
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
