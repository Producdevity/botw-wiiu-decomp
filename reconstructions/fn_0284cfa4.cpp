extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0284d304(void*, const void*);
extern "C" unsigned char data_10145574[];

extern "C" void* fn_0284cfa4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0284d304(storage, a);
    *(const void**)((char*)storage + 12) = data_10145574;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
