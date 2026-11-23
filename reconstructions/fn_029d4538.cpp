extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" unsigned char data_101808e8[];

extern "C" void* fn_029d4538(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    fn_030ff6a0(storage, arg);
    *(const void**)((char*)storage + 16) = data_101808e8;
    return storage;
}
