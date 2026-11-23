extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022e75e8(void*, const void*);
extern "C" unsigned char data_100b41a0[];

extern "C" void* fn_02431658(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022e75e8(storage, a);
    *(const void**)((char*)storage + 12) = data_100b41a0;
    *(unsigned*)((char*)storage + 128) = 0;
    *(unsigned char*)((char*)storage + 132) = 0;
    return storage;
}
