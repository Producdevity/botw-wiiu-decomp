typedef signed char s8;

extern "C" unsigned fn_02eaa618(void *);

extern "C" void *data_104698f8;

namespace {
struct Target {
    char padding_0[0x45];
    s8 active;
};
struct Owner {
    char padding_0[0x8734];
    Target *target;
};
}

extern "C" void fn_02f03938(void *object) {
    Owner *owner = (Owner *)object;
    Target *target;

    if (fn_02eaa618(data_104698f8) == 2) {
        target = owner->target;
        if (target != 0) {
            target->active = 0;
        }
    }
}
