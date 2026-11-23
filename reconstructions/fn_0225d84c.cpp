extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023679e8(void*, const void*);
extern "C" unsigned char data_10064998[];

extern "C" void* fn_0225d84c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(116);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023679e8(storage, a);
    *(const void**)((char*)storage + 12) = data_10064998;
    *(unsigned*)((char*)storage + 108) = 0;
    *(unsigned*)((char*)storage + 112) = 0;
    return storage;
}
