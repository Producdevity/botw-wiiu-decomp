extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02424aac(void*, const void*);
extern "C" unsigned char data_100b1604[];

extern "C" void* fn_02424fdc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_02424aac(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b1604;
    return storage;
}
