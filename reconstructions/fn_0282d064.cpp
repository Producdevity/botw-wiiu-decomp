namespace {
struct ClassInfo {
    char padding_0[0x15C];
    int (*update)(void *);
};
struct Object {
    void *target;
    char padding_4[8];
    ClassInfo *info;
};
}

extern "C" void fn_0281b80c(void*);
extern "C" void fn_0344ba94(void *, const unsigned *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0282d064(void *object) {
    unsigned int mode;
    void *handle;
    fn_0281b80c(object);
    handle = fn_037966a8(((Object *)object)->target);
    if (handle != 0) {
        mode = 4;
        fn_0344ba94(handle, &mode);
    }
    ((Object *)object)->info->update(object);
}
