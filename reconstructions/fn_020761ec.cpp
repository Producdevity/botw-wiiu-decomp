typedef signed char s8;
typedef int s32;

extern "C" int fn_02a19f40(void*);
extern "C" void* data_10463748;

namespace {
struct Vtable {
    char padding_0[0x104];
    s32 (*slot_104)(void *);
};
struct Object {
    char padding_0[0xC];
    Vtable *vtable;
    s8 flag;
};
}

extern "C" void fn_020761ec(void *object) {
    if (data_10463748 != 0 && fn_02a19f40(data_10463748) != 0) {
        Vtable *vtable;
        (vtable = ((Object *) object)->vtable)->slot_104(object);
        ((Object *) object)->flag = 0;
    }
}
