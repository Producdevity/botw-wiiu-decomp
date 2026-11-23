extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0214e2f4(void*, const void*);
extern "C" unsigned char data_100663f0[];

extern "C" void* fn_02265f8c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0214e2f4(storage, a);
    *(const void**)((char*)storage + 12) = data_100663f0;
    *(unsigned*)((char*)storage + 76) = 0;
    *(unsigned*)((char*)storage + 80) = 0;
    return storage;
}
