extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023409f8(void*, const void*);
extern "C" unsigned char data_10089c90[];

extern "C" void* fn_023419d8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_023409f8(storage, arg);
    *(const void**)((char*)storage + 12) = data_10089c90;
    return storage;
}
