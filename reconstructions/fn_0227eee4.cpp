namespace {
struct Vtable {
    char padding_0[0x43C];
    unsigned char *(*getFlag)(void *);
};

struct Target {
    char padding_0[0xE8];
    Vtable *vtable;
};
}

extern "C" void fn_037970d4(void*, void*);
extern "C" void fn_03797a04(void*, int, void*, void*);

extern "C" void fn_0227eee4(void **handle) {
    Target *target = (Target *)*handle;
    unsigned char *flag = target->vtable->getFlag(target);
    if (flag != 0 && *flag == 0) {
        fn_037970d4(*handle, 0);
        return;
    }
    fn_03797a04(*handle, 4, 0, 0);
}
