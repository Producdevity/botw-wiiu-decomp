extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026749c0(void*, const void*);
extern "C" unsigned char data_10106ed4[];

extern "C" void* fn_02679450(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026749c0(storage, a);
    *(const void**)((char*)storage + 12) = data_10106ed4;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
