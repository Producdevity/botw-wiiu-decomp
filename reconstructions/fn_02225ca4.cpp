extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0222547c(void*, const void*);
extern "C" unsigned char data_1005ad38[];

extern "C" void* fn_02225ca4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0222547c(storage, a);
    *(const void**)((char*)storage + 12) = data_1005ad38;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
