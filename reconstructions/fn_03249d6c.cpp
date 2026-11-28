namespace {
struct Vtable {
    unsigned char padding_0[0x8C];
    int (*getValue)();
};
}

extern "C" int fn_03249d6c(void **object, int *value) {
    int (*getValue)() = static_cast<Vtable *>(*object)->getValue;
    return (*value ^ getValue()) == 0;
}
