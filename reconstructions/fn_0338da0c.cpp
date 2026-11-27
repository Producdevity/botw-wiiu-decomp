namespace {
struct VTable {
    char padding_0[0xC];
    int (*isFinished)();
};
}

extern "C" int fn_0338da0c(void** object) {
    VTable* vtable = (VTable*)*object;
    return vtable->isFinished() == 0;
}
