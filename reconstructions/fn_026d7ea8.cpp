extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026d82d0(void*, const void*);
extern "C" unsigned char data_10114a98[];

extern "C" void* fn_026d7ea8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026d82d0(storage, a);
    *(const void**)((char*)storage + 12) = data_10114a98;
    *(unsigned*)((char*)storage + 48) = 0;
    return storage;
}
