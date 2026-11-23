extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028a4abc(void*, const void*);
extern "C" unsigned char data_100e73d8[];

extern "C" void* fn_0258d6ec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(132);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_028a4abc(storage, a);
    *(const void**)((char*)storage + 12) = data_100e73d8;
    *(unsigned*)((char*)storage + 128) = 0;
    return storage;
}
