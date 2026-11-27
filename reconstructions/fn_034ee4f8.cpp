typedef int s32;

extern "C" int fn_037fbff0(void);

namespace {
struct Owner {
    char padding_0[0x3C];
    void *object;
};
struct Object {
    char padding_0[0xC];
    void* const* vtable;
};
}

extern "C" void fn_034ee4f8(void *owner) {
    Object *object;

    if ((void *) ((Owner *)owner)->object != 0) {
        fn_037fbff0();
        object = (Object *)((Owner *)owner)->object;
        ((s32 (*)(void *))(object->vtable)[9])(object);
        ((Owner *)owner)->object = 0;
        fn_037fbff0();
    }
}
