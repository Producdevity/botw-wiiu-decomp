extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e6fd0(void*, const void*);
extern "C" unsigned char data_1005b104[];

extern "C" void* fn_02226a24(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    fn_021e6fd0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1005b104;
    return storage;
}
