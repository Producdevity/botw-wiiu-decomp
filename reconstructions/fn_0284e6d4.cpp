extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02895838(void*, const void*);
extern "C" unsigned char data_10145ad8[];

extern "C" void* fn_0284e6d4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02895838(storage, a);
    *(const void**)((char*)storage + 12) = data_10145ad8;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
