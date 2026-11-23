extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02714e98(void*, const void*);
extern "C" unsigned char data_101479fc[];

extern "C" void* fn_0285aba8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02714e98(storage, a);
    *(const void**)((char*)storage + 12) = data_101479fc;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
