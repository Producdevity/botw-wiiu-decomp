extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02596418(void*, const void*);
extern "C" unsigned char data_100f86f0[];

extern "C" void* fn_0261d3d8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02596418(storage, a);
    *(const void**)((char*)storage + 12) = data_100f86f0;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
