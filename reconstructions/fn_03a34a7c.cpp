extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03c49888(void*, const void*);
extern "C" unsigned char data_1035cbec[];

extern "C" void* fn_03a34a7c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    fn_03c49888(storage, arg);
    *(const void**)((char*)storage + 8) = data_1035cbec;
    return storage;
}
