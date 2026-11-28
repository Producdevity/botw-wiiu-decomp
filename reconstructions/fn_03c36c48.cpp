typedef signed char s8;
typedef int s32;

namespace {
struct Entity {
    char padding_0[0xC];
    void *parent;
    char padding_10[0xDE];
    s8 flag;
    char padding_EF[0x1A9];
    void **vtable;
};
}

extern "C" void fn_03c289b0(void*, void*);

extern "C" void fn_03c36c48(void *object, s8 flag) {
    Entity *entity = (Entity *)object;
    void *parent = entity->parent;
    entity->flag = flag;
    if (parent != 0) {
        fn_03c289b0(parent, entity);
    }
    ((s32 (*)(void *))entity->vtable[19])(object);
}
