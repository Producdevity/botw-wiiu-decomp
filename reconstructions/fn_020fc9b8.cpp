extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020fb6f8(void*, const void*);
extern "C" unsigned char data_10020620[];

extern "C" void* fn_020fc9b8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020fb6f8(storage, a);
    *(const void**)((char*)storage + 12) = data_10020620;
    *(unsigned*)((char*)storage + 132) = 0;
    return storage;
}
