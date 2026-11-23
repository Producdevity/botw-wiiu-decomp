extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025a0360(void*, const void*);
extern "C" unsigned char data_100fe87c[];

extern "C" void* fn_02644950(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025a0360(storage, a);
    *(const void**)((char*)storage + 12) = data_100fe87c;
    *(unsigned char*)((char*)storage + 60) = 0;
    return storage;
}
