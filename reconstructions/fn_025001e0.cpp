extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02920fac(void*, const void*);
extern "C" unsigned char data_100d0ff4[];

extern "C" void* fn_025001e0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02920fac(storage, a);
    *(const void**)((char*)storage + 12) = data_100d0ff4;
    *(unsigned char*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
