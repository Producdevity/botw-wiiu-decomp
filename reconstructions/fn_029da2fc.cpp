extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" unsigned char data_1018237c[];

extern "C" void* fn_029da2fc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = data_1018237c;
    *(unsigned*)((char*)storage + 20) = 0;
    return storage;
}
