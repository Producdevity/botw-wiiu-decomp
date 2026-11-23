extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d53ac(void*, const void*);
extern "C" unsigned char data_10047dfc[];

extern "C" void* fn_021d7a00(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    fn_021d53ac(storage, arg);
    *(const void**)((char*)storage + 12) = data_10047dfc;
    return storage;
}
