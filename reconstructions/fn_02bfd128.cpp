extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bfdc24(void*, const void*);
extern "C" unsigned char data_101bddc4[];
extern "C" unsigned char data_101bddb4[];

extern "C" void* fn_02bfd128(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    fn_02bfdc24(storage, arg);
    *(const void**)((char*)storage + 12) = data_101bddc4;
    *(const void**)((char*)storage + 36) = data_101bddb4;
    *(unsigned*)((char*)storage + 64) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    *(unsigned*)((char*)storage + 72) = 0;
    return storage;
}
