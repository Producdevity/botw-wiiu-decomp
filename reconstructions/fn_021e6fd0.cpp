extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02226da4(void*, const void*);
extern "C" unsigned char data_1004bfe8[];

extern "C" void* fn_021e6fd0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02226da4(storage, a);
    *(const void**)((char*)storage + 12) = data_1004bfe8;
    *(unsigned*)((char*)storage + 124) = 0;
    return storage;
}
