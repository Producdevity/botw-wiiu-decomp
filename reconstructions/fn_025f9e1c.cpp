extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03276cf0(void*, const void*);
extern "C" unsigned char data_100f36b4[];

extern "C" void* fn_025f9e1c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_03276cf0(storage, a);
    *(const void**)((char*)storage + 12) = data_100f36b4;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
