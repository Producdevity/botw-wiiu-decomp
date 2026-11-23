extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void*, const void*);
extern "C" unsigned char data_101cfa98[];

extern "C" void* fn_02c931b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    fn_02c6430c(storage, arg);
    *(const void**)((char*)storage + 12) = data_101cfa98;
    return storage;
}
