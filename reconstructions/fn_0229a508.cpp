extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0229cab4(void*, const void*);
extern "C" unsigned char data_1006ebb0[];

extern "C" void* fn_0229a508(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_0229cab4(storage, arg);
    *(const void**)((char*)storage + 12) = data_1006ebb0;
    return storage;
}
