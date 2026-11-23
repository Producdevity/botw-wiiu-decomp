extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022258c0(void*, const void*);
extern "C" unsigned char data_1005aa10[];

extern "C" void* fn_0222547c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022258c0(storage, a);
    *(const void**)((char*)storage + 12) = data_1005aa10;
    *(unsigned*)((char*)storage + 28) = 0;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
