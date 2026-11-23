extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02231678(void*, const void*);
extern "C" unsigned char data_100701d0[];

extern "C" void* fn_022a0150(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02231678(storage, a);
    *(const void**)((char*)storage + 12) = data_100701d0;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
