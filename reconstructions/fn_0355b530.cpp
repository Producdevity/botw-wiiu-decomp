namespace {
struct Target {
    char padding_0[0x90];
    int flags;
};
struct Owner {
    char padding_0[0x398];
    Target* target;
    char padding_39c[0x544 - 0x39C];
    signed char state;
    unsigned char enabled;
};
}

extern "C" void fn_0355b530(void *object, signed char value) {
    Target *target = ((Owner*)object)->target;
    if (target != 0) {
        if ((value == 0) && (((Owner*)object)->enabled != 0)) {
            target->flags |= 0x200;
            ((Owner*)object)->state = value;
            return;
        }
        target->flags &= ~0x200;
        ((Owner*)object)->state = value;
        return;
    }
    ((Owner*)object)->state = value;
}
