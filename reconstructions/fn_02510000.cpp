extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0290e0d0(void*, const void*);
extern "C" unsigned char data_100d4270[];

extern "C" void* fn_02510000(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(312);
        if (!storage)
            return storage;
    }
    fn_0290e0d0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100d4270;
    return storage;
}
