extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02118d3c(void*, const void*);
extern "C" unsigned char data_100261f0[];

extern "C" void* fn_02119228(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    fn_02118d3c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100261f0;
    return storage;
}
