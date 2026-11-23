extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0291887c(void*, const void*);
extern "C" unsigned char data_100d0e64[];

extern "C" void* fn_024ff414(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0291887c(storage, a);
    *(const void**)((char*)storage + 12) = data_100d0e64;
    *(unsigned*)((char*)storage + 36) = 0;
    *(unsigned char*)((char*)storage + 40) = 0;
    return storage;
}
