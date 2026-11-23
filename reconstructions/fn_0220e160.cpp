extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022a0150(void*, const void*);
extern "C" unsigned char data_1005492c[];

extern "C" void* fn_0220e160(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_022a0150(storage, arg);
    *(const void**)((char*)storage + 12) = data_1005492c;
    return storage;
}
