namespace {
struct Vtable {
    unsigned char padding_0[0x8C];
    int (*getValue)();
};
}

extern "C" int fn_03249d6c(void **arg0, int *arg1) {
    int (*getValue)() = static_cast<Vtable *>(*arg0)->getValue;
    return (*arg1 ^ getValue()) == 0;
}
