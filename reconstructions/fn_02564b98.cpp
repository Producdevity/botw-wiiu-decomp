extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029661f0(void*, const void*);
extern "C" unsigned char data_100e109c[];

extern "C" void* fn_02564b98(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029661f0(storage, a);
    *(const void**)((char*)storage + 12) = data_100e109c;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
