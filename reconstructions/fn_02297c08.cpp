extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0229a1e8(void*, const void*);
extern "C" unsigned char data_1006e0d0[];

extern "C" void* fn_02297c08(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0229a1e8(storage, a);
    *(const void**)((char*)storage + 12) = data_1006e0d0;
    *(unsigned*)((char*)storage + 40) = 0;
    return storage;
}
