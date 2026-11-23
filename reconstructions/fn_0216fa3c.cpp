extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02107274(void*, const void*);
extern "C" unsigned char data_10034d18[];

extern "C" void* fn_0216fa3c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02107274(storage, a);
    *(const void**)((char*)storage + 12) = data_10034d18;
    *(unsigned*)((char*)storage + 16) = 0;
    return storage;
}
