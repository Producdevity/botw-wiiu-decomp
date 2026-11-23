extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025653d4(void*, const void*);
extern "C" unsigned char data_10121fe0[];

extern "C" void* fn_02741eb4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025653d4(storage, a);
    *(const void**)((char*)storage + 12) = data_10121fe0;
    *(unsigned*)((char*)storage + 64) = 0;
    return storage;
}
