extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032ca7cc(void*, const void*);
extern "C" unsigned char data_102a8260[];

extern "C" void* fn_032c9fa4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_032ca7cc(storage, a);
    *(const void**)((char*)storage + 12) = data_102a8260;
    *(unsigned*)((char*)storage + 64) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
