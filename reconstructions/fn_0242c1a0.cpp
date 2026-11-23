extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02139884(void*, const void*);
extern "C" unsigned char data_100b30e8[];

extern "C" void* fn_0242c1a0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_02139884(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b30e8;
    return storage;
}
