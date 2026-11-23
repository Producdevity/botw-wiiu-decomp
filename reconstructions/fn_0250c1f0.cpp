extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028a4abc(void*, const void*);
extern "C" unsigned char data_100d30b0[];

extern "C" void* fn_0250c1f0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_028a4abc(storage, a);
    *(const void**)((char*)storage + 12) = data_100d30b0;
    *(unsigned*)((char*)storage + 128) = 0;
    *(unsigned char*)((char*)storage + 132) = 0;
    return storage;
}
