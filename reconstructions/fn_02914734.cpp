extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029128b4(void*, const void*);
extern "C" unsigned char data_10163528[];

extern "C" void* fn_02914734(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029128b4(storage, a);
    *(const void**)((char*)storage + 12) = data_10163528;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
