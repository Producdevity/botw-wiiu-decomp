namespace {
struct Vtable {
    unsigned char padding_0[0xC];
    int (*check)();
};
}

extern "C" int fn_02c48530(void **arg0) {
    Vtable *vtable = static_cast<Vtable *>(*arg0);
    return vtable->check() == 0;
}
