extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0236aa4c(void*, const void*);
extern "C" unsigned char data_100b1b44[];

extern "C" void* fn_02426fcc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(176);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0236aa4c(storage, a);
    *(const void**)((char*)storage + 12) = data_100b1b44;
    *(unsigned*)((char*)storage + 172) = 0;
    return storage;
}
