extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0291eae4(void*, const void*);
extern "C" unsigned char data_10165784[];

extern "C" void* fn_0291e560(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0291eae4(storage, arg);
    *(const void**)((char*)storage + 12) = data_10165784;
    return storage;
}
