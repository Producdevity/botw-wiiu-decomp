extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025a0360(void*, const void*);
extern "C" unsigned char data_100c826c[];

extern "C" void* fn_024c57a8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025a0360(storage, a);
    *(const void**)((char*)storage + 12) = data_100c826c;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
