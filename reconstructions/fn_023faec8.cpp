extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023f9d34(void*, const void*);
extern "C" unsigned char data_100a9880[];

extern "C" void* fn_023faec8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    fn_023f9d34(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a9880;
    return storage;
}
