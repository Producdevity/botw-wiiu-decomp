extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024d18dc(void*, const void*);
extern "C" unsigned char data_100c9b20[];

extern "C" void* fn_024d1210(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(216);
        if (!storage)
            return storage;
    }
    fn_024d18dc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100c9b20;
    return storage;
}
