extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021cf6f8(void*, const void*);
extern "C" unsigned char data_1000da44[];

extern "C" void* fn_0207a684(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021cf6f8(storage, a);
    *(const void**)((char*)storage + 12) = data_1000da44;
    *(unsigned*)((char*)storage + 72) = 0;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
