extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027e09cc(void*, const void*);
extern "C" unsigned char data_10168a80[];

extern "C" void* fn_0292d570(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_027e09cc(storage, a);
    *(const void**)((char*)storage + 12) = data_10168a80;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
