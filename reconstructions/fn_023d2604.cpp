extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023d44cc(void*, const void*);
extern "C" unsigned char data_100a34f0[];

extern "C" void* fn_023d2604(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023d44cc(storage, a);
    *(const void**)((char*)storage + 12) = data_100a34f0;
    *(unsigned*)((char*)storage + 140) = 0;
    return storage;
}
