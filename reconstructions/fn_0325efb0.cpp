extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0325f3b0(void*, const void*);
extern "C" unsigned char data_10299560[];

extern "C" void* fn_0325efb0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_0325f3b0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10299560;
    return storage;
}
