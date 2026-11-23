extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027fe7bc(void*, const void*);
extern "C" unsigned char data_101426d4[];

extern "C" void* fn_0283acb0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_027fe7bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_101426d4;
    *(unsigned*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 4;
    *(unsigned*)((char*)storage + 44) = 4;
    *(unsigned char*)((char*)storage + 48) = 0;
    return storage;
}
