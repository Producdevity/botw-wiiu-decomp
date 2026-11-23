extern "C" int data_10075108;
extern "C" void* fn_022c4680(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_022c40ec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022c4680(storage, a);
    *(const void**)((char*)storage + 12) = &data_10075108;
    if (!((char*)storage + 92))
        fn_0308e578(12);
    if (!((char*)storage + 104))
        fn_0308e578(36);
    return storage;
}
