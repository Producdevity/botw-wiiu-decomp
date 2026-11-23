extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0273c8d4(void*, const void*);
extern "C" unsigned char data_100d8708[];

extern "C" void* fn_02537acc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    fn_0273c8d4(storage, arg);
    *(const void**)((char*)storage + 12) = data_100d8708;
    return storage;
}
