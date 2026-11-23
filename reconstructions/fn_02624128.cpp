extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0251d984(void*, const void*);
extern "C" unsigned char data_100f9c28[];

extern "C" void* fn_02624128(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0251d984(storage, a);
    *(const void**)((char*)storage + 12) = data_100f9c28;
    *(unsigned*)((char*)storage + 136) = 0;
    *(unsigned char*)((char*)storage + 140) = 0;
    return storage;
}
