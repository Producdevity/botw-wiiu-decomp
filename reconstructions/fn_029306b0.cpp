extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02787bb0(void*, const void*);
extern "C" unsigned char data_10169294[];

extern "C" void* fn_029306b0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02787bb0(storage, a);
    *(const void**)((char*)storage + 12) = data_10169294;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
