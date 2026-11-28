namespace {
struct Object {
    void *owner;
    char padding_4[0xAC];
    char member_b0[1];
};
}

extern "C" void fn_0236202c(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_022a0a94(void **object) {
    fn_02b616bc(((Object *)object)->member_b0, fn_037966a8(*object));
    fn_0236202c((int)object);
}
