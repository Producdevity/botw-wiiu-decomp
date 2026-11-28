typedef signed char s8;
typedef int s32;

namespace {
struct Linked {
    unsigned char padding_0[0x61C];
    s8 flag;
};

struct Entity {
    unsigned char padding_0[0xE8];
    void* const* vtable;
    unsigned char padding_EC[0x63C];
    s8 flag;
};
}

extern "C" void fn_033b8e4c(void *self, s8 flag, s32 propagate) {
    Linked *linked;
    Entity *entity = (Entity *)self;

    entity->flag = flag;
    if (propagate != 0) {
        linked = (Linked *)((void * (*)())entity->vtable[325])();
        if (linked != 0) {
            linked->flag = flag;
        }
    }
}
