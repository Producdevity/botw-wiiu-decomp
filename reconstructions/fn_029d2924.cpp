extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" unsigned char data_101800b4[];

extern "C" void* fn_029d2924(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = data_101800b4;
    *(unsigned*)((char*)storage + 20) = 0;
    return storage;
}
