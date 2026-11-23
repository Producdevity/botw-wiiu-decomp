extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0241d048(void*, const void*);
extern "C" unsigned char data_100afce4[];

extern "C" void* fn_0241d9e8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0241d048(storage, a);
    *(const void**)((char*)storage + 12) = data_100afce4;
    *(unsigned*)((char*)storage + 88) = 0;
    return storage;
}
