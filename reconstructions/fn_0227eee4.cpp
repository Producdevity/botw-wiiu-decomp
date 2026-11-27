namespace {
struct Vtable {
    char padding_0[0x43C];
    unsigned char* (*getFlag)(void*);
};

struct Target {
    char padding_0[0xE8];
    Vtable* vtable;
};
}

extern "C" void fn_037970d4(void*, void*);
extern "C" void fn_03797a04(void*, int, void*, void*);

extern "C" void fn_0227eee4(void** arg0) {
    Target* target = (Target*)*arg0;
    unsigned char* flag = target->vtable->getFlag(target);
    if (flag != 0 && *flag == 0) {
        fn_037970d4(*arg0, 0);
        return;
    }
    fn_03797a04(*arg0, 4, 0, 0);
}
