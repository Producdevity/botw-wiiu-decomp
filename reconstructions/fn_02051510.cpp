typedef int s32;

extern "C" int fn_0378dce8(int, void*, void*);

namespace {
struct Object {
    char padding_0[0x14];
    void **vtable;
};

struct Owner {
    char padding_0[8];
    s32 object;
};
}

extern "C" void fn_02051510(void *owner, void *arg1) {
    s32 object = ((Owner *)owner)->object;

    if (object != 0) {
        fn_0378dce8(object, arg1, 0);
        ((void (*)(s32, s32))((Object *)object)->vtable[21])(object, object);
    }
}
