extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023455c0(void*, const void*);
extern "C" unsigned char data_100986c8[];

extern "C" void* fn_02398dc8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023455c0(storage, a);
    *(const void**)((char*)storage + 12) = data_100986c8;
    *(unsigned*)((char*)storage + 24) = 0;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
