extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022a6794(void*, const void*);
extern "C" unsigned char data_10071620[];

extern "C" void* fn_022a5fdc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    fn_022a6794(storage, arg);
    *(const void**)((char*)storage + 12) = data_10071620;
    return storage;
}
