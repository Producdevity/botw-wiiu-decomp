extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023431ec(void*, const void*);
extern "C" unsigned char data_1008a39c[];

extern "C" void* fn_0234362c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023431ec(storage, a);
    *(const void**)((char*)storage + 12) = data_1008a39c;
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
