typedef int s32;

extern "C" int fn_03289108(void*);
extern "C" int fn_032893bc(void*);
extern "C" void fn_0339f71c(void*, void*);

namespace {
struct Target {
    unsigned char padding_0[0x90];
    s32 flags;
};

struct Owner {
    unsigned char padding_0[0x398];
    Target *target;
};
}

extern "C" void fn_0328b7b0(void *owner) {
    Target *target;

    fn_0339f71c(owner, (void *)(fn_03289108(owner)));
    if (fn_032893bc(owner) != 0) {
        target = ((Owner *)owner)->target;
        if (target != 0) {
            target->flags = target->flags | 4;
        }
    }
}
