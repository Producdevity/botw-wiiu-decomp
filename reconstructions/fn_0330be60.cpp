typedef int s32;

extern "C" void fn_03308924(void);

namespace {
struct Target {
    unsigned char padding_0[0x104];
    s32 state;
};

struct Entity {
    unsigned char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" void fn_0330be60(void *arg0) {
    Target *target;
    Entity *entity = (Entity *)arg0;

    if (entity != 0) {
        target = (Target *)((void * (*)())entity->vtable[263])();
        if ((target != 0) && (target->state == 1)) {
            fn_03308924();
        }
    }
}
