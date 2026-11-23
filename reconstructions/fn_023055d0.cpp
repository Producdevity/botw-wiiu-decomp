extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023066e4(void*, const void*);
extern "C" unsigned char data_1007f598[];

extern "C" void* fn_023055d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(116);
        if (!storage)
            return storage;
    }
    fn_023066e4(storage, arg);
    *(const void**)((char*)storage + 12) = data_1007f598;
    return storage;
}
