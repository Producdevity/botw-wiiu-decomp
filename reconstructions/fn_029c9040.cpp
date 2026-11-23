extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c9130(void*, const void*);
extern "C" unsigned char data_1017e2c0[];

extern "C" void* fn_029c9040(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_029c9130(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017e2c0;
    return storage;
}
