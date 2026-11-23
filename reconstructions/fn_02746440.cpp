extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027449a4(void*, const void*);
extern "C" unsigned char data_10122a90[];

extern "C" void* fn_02746440(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_027449a4(storage, a);
    *(const void**)((char*)storage + 12) = data_10122a90;
    *(unsigned*)((char*)storage + 64) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
