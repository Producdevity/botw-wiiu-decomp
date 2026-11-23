extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02cb79ec(void*, const void*);
extern "C" unsigned char data_101d4eec[];

extern "C" void* fn_02cb6c04(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02cb79ec(storage, a);
    *(const void**)((char*)storage + 12) = data_101d4eec;
    *(unsigned*)((char*)storage + 76) = 0;
    *(unsigned*)((char*)storage + 80) = 0;
    *(unsigned*)((char*)storage + 84) = 0;
    *(unsigned*)((char*)storage + 88) = 0;
    *(unsigned char*)((char*)storage + 92) = 0;
    return storage;
}
