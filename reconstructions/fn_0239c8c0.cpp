extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0239a0ec(void*, const void*);
extern "C" unsigned char data_10099444[];

extern "C" void* fn_0239c8c0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0239a0ec(storage, a);
    *(const void**)((char*)storage + 12) = data_10099444;
    *(unsigned*)((char*)storage + 20) = 0;
    return storage;
}
