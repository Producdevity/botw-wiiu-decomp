extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02437f54(void*, const void*);
extern "C" unsigned char data_1006b3a4[];

extern "C" void* fn_0227c7ac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02437f54(storage, a);
    *(const void**)((char*)storage + 12) = data_1006b3a4;
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
