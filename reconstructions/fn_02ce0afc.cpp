extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void*, const void*);
extern "C" unsigned char data_101da1a0[];

extern "C" void* fn_02ce0afc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02c6430c(storage, a);
    *(const void**)((char*)storage + 12) = data_101da1a0;
    *(unsigned*)((char*)storage + 20) = 0;
    return storage;
}
