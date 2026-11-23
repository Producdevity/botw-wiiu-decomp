extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02898410(void*, const void*);
extern "C" unsigned char data_100cd5d0[];

extern "C" void* fn_024ea528(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02898410(storage, arg);
    *(const void**)((char*)storage + 12) = data_100cd5d0;
    return storage;
}
