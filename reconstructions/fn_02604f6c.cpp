extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025e95d4(void*, const void*);
extern "C" unsigned char data_100f50e0[];

extern "C" void* fn_02604f6c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(1480);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025e95d4(storage, a);
    *(const void**)((char*)storage + 12) = data_100f50e0;
    *(unsigned char*)((char*)storage + 1476) = 0;
    return storage;
}
