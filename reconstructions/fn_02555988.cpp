extern "C" void* fn_031968e4(void*);
extern "C" void* fn_031979fc(void*, void*, void*, void*, void*, void*);

namespace {
struct Owner {
    char padding_0[0xE8];
    char *vtable;
};
struct Target {
    char padding_0[0x88];
    unsigned char state;
};
}

extern "C" void fn_02555988(void** self, int enable)
{
    Owner *owner = (Owner *)*self;
    Target *target = (Target *)(*(void *(**)(void *))(owner->vtable + 0x30c))(owner);
    if (target != 0) {
        unsigned char state = target->state;
        if (enable != 0) {
            if (state != 2)
                fn_031979fc(target, 0, (void *)2, 0, (void *)1, 0);
        } else if (state == 2) {
            fn_031968e4(target);
        }
    }
}
