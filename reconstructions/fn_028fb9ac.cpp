extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025e6eb4(void*, const void*);
extern "C" unsigned char data_1015e8a8[];

extern "C" void* fn_028fb9ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(304);
        if (!storage)
            return storage;
    }
    fn_025e6eb4(storage, arg);
    *(const void**)((char*)storage + 12) = data_1015e8a8;
    return storage;
}
