extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020d40b8(void*, const void*);
extern "C" unsigned char data_100616e8[];

extern "C" void* fn_0224ecc0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_020d40b8(storage, arg);
    *(const void**)((char*)storage + 12) = data_100616e8;
    return storage;
}
