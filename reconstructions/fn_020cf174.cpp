extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020cf4c0(void*, const void*);
extern "C" unsigned char data_1001941c[];

extern "C" void* fn_020cf174(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020cf4c0(storage, a);
    *(const void**)((char*)storage + 12) = data_1001941c;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
