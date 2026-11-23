extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02231908(void*, const void*);
extern "C" unsigned char data_10090e18[];

extern "C" void* fn_0236a194(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02231908(storage, a);
    *(const void**)((char*)storage + 12) = data_10090e18;
    *(unsigned*)((char*)storage + 64) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
