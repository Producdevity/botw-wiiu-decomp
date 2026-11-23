extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032c71d4(void*, const void*);
extern "C" unsigned char data_10037624[];

extern "C" void* fn_0217ce0c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_032c71d4(storage, a);
    *(const void**)((char*)storage + 12) = data_10037624;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
