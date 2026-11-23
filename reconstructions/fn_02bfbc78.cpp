extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bfabc0(void*, const void*);
extern "C" unsigned char data_101bd8c0[];
extern "C" unsigned char data_101bda20[];

extern "C" void* fn_02bfbc78(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02bfabc0(storage, a);
    *(const void**)((char*)storage + 12) = data_101bd8c0;
    *(const void**)((char*)storage + 36) = data_101bda20;
    return storage;
}
