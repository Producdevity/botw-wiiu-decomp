typedef int s32;

extern "C" int fn_0331dafc(void*);
extern "C" int fn_03799e00(void *);

namespace {
struct Entity {
    unsigned char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" s32 fn_020af61c(void *arg0) {
    s32 target;
    s32 component;
    Entity *entity = (Entity *)arg0;

    if ((fn_03799e00(entity) != 0) || ((target = ((s32 (*)(void *))entity->vtable[263])(entity), ((target == 0) == 0)) && (component = fn_0331dafc((void *)(target + 0x100)), ((component == 0) == 0)) && (((s32 (*)())((Entity *)component)->vtable[101])() != 0))) {
        return 1;
    }
    return 0;
}
