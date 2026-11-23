extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c7390(void*, const void*);
extern "C" unsigned char data_1017e568[];

extern "C" void* fn_029c9650(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029c7390(storage, a);
    *(const void**)((char*)storage + 16) = data_1017e568;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
