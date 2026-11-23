extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02921fe0(void*, const void*);
extern "C" unsigned char data_101660a0[];

extern "C" void* fn_02920fac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02921fe0(storage, a);
    *(const void**)((char*)storage + 12) = data_101660a0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
