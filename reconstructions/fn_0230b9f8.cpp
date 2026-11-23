extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020eb910(void*, const void*);
extern "C" unsigned char data_100817a0[];

extern "C" void* fn_0230b9f8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020eb910(storage, a);
    *(const void**)((char*)storage + 12) = data_100817a0;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
