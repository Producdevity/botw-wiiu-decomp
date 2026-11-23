extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0327ee50(void*, const void*);
extern "C" unsigned char data_10099f04[];
extern "C" unsigned char data_1009a00c[];

extern "C" void* fn_0239f5ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0327ee50(storage, a);
    *(const void**)((char*)storage + 12) = data_10099f04;
    *(const void**)((char*)storage + 24) = data_1009a00c;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
