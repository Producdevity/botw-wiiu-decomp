extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0214bae4(void*, const void*);
extern "C" unsigned char data_100757ac[];

extern "C" void* fn_022c5a6c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_0214bae4(storage, arg);
    *(const void**)((char*)storage + 12) = data_100757ac;
    return storage;
}
