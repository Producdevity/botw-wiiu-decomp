extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0261928c(void*, const void*);
extern "C" unsigned char data_100f7660[];

extern "C" void* fn_02616210(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0261928c(storage, a);
    *(const void**)((char*)storage + 12) = data_100f7660;
    *(unsigned*)((char*)storage + 92) = 0;
    return storage;
}
