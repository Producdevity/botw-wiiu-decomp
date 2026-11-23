extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02086354(void*, const void*);
extern "C" unsigned char data_10010028[];

extern "C" void* fn_02086b28(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_02086354(storage, arg);
    *(const void**)((char*)storage + 12) = data_10010028;
    return storage;
}
