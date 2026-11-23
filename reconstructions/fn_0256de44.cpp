extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02579030(void*, const void*);
extern "C" unsigned char data_100e29a0[];

extern "C" void* fn_0256de44(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(356);
        if (!storage)
            return storage;
    }
    fn_02579030(storage, arg);
    *(const void**)((char*)storage + 12) = data_100e29a0;
    return storage;
}
