extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027fe7bc(void*, const void*);
extern "C" unsigned char data_10140fb4[];

extern "C" void* fn_02831ea4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_027fe7bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10140fb4;
    *(unsigned*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = -1;
    return storage;
}
