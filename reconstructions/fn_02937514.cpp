extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02921ba0(void*, const void*);
extern "C" unsigned char data_1016ad10[];

extern "C" void* fn_02937514(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02921ba0(storage, a);
    *(const void**)((char*)storage + 12) = data_1016ad10;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
