namespace {
struct Owner;
struct ClassInfo {
    char padding_0[0x16C];
    void *(*get_target)(void *);
};
struct Owner {
    char padding_0[0xE8];
    ClassInfo *info;
};
struct Object {
    Owner *owner;
    char padding_4[0x28];
    void *pending;
    unsigned char registered;
};
}

extern "C" void fn_032d2480(void*);
extern "C" void fn_034666c4(void *);
extern "C" void fn_03479bc8(void *, void *);
extern "C" void * data_1046fe50;

extern "C" void fn_032d11e0(void *self) {
    Owner *owner;
    void *target;
    void *pending;
    fn_032d2480(self);
    if (((Object *)self)->registered != 0) {
        owner = ((Object *)self)->owner;
        target = owner->info->get_target(owner);
        if (target != 0) {
            fn_034666c4(target);
        }
        ((Object *)self)->registered = 0;
    }
    pending = ((Object *)self)->pending;
    if (pending != 0) {
        fn_03479bc8(data_1046fe50, pending);
        ((Object *)self)->pending = 0;
    }
}
