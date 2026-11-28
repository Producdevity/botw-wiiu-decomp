typedef int s32;

extern "C" void fn_03797a04(void*, int, void*, void*);

namespace {
struct Component {
    unsigned char padding_0[4];
    s32 state;
};

struct Entity {
    unsigned char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" void fn_027fc090(void **object) {
    Entity *entity = (Entity *)*object;
    Component *component = (Component *)((void * (*)(void *))entity->vtable[271])(entity);
    if (component != 0) {
        component->state = 0;
    }
    fn_03797a04(*object, 4, 0, 0);
}
