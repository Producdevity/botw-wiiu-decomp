namespace {
struct Vtable {
    unsigned char padding_0[0xC];
    int (*check)();
};
}

extern "C" int fn_02c48530(void** object) {
    Vtable* vtable = static_cast<Vtable*>(*object);
    return vtable->check() == 0;
}
