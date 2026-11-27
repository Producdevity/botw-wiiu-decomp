namespace {
struct ClassInfo {
    char padding_0[0x16C];
    void *(*get_target)(void *);
};
struct Owner {
    char padding_0[0xE8];
    ClassInfo *info;
};
}

extern "C" void fn_030ea2e0(void *);
extern "C" void fn_03471628(void *);

extern "C" void fn_0299f54c(void **arg0) {
    Owner *owner = (Owner *) *arg0;
    void *target = owner->info->get_target(owner);
    if (target == 0) {
        fn_030ea2e0(arg0);
        return;
    }
    fn_03471628(target);
}
