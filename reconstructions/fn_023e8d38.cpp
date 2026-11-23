extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020ff788(void*, const void*);
extern "C" unsigned char data_100a6c54[];

extern "C" void* fn_023e8d38(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020ff788(storage, a);
    *(const void**)((char*)storage + 12) = data_100a6c54;
    *(unsigned*)((char*)storage + 124) = 0;
    return storage;
}
