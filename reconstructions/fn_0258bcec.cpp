extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02902210(void*, const void*);
extern "C" unsigned char data_100e6dd4[];

extern "C" void* fn_0258bcec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02902210(storage, a);
    *(const void**)((char*)storage + 12) = data_100e6dd4;
    *(unsigned*)((char*)storage + 92) = 0;
    return storage;
}
