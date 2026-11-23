extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026d5ad8(void*, const void*);
extern "C" unsigned char data_1015f8b0[];

extern "C" void* fn_02900eec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026d5ad8(storage, a);
    *(const void**)((char*)storage + 12) = data_1015f8b0;
    *(unsigned*)((char*)storage + 100) = 0;
    *(unsigned char*)((char*)storage + 104) = 0;
    return storage;
}
