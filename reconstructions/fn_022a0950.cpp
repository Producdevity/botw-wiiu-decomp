extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02361b1c(void*, const void*);
extern "C" void fn_02b614e0(void *);
extern "C" unsigned char data_100704f4[];

extern "C" void* fn_022a0950(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(184);
        if (!storage)
            return storage;
    }
    fn_02361b1c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100704f4;
    fn_02b614e0((char*)storage + 176);
    return storage;
}
