extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021eb45c(void*, const void*);
extern "C" unsigned char data_1004dd7c[];

extern "C" void* fn_021edea4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021eb45c(storage, a);
    *(const void**)((char*)storage + 12) = data_1004dd7c;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
