extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025906d0(void*, const void*);
extern "C" unsigned char data_100f24d0[];

extern "C" void* fn_025f37b0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025906d0(storage, a);
    *(const void**)((char*)storage + 12) = data_100f24d0;
    *(unsigned*)((char*)storage + 44) = 0;
    *(unsigned*)((char*)storage + 48) = 0;
    return storage;
}
