extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0315a034(void*, const void*);
extern "C" unsigned char data_100fa660[];

extern "C" void* fn_02628a3c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0315a034(storage, arg);
    *(const void**)((char*)storage + 12) = data_100fa660;
    return storage;
}
