extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02217618(void*, const void*);
extern "C" unsigned char data_10056d2c[];

extern "C" void* fn_0221681c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02217618(storage, a);
    *(const void**)((char*)storage + 12) = data_10056d2c;
    *(unsigned*)((char*)storage + 88) = 0;
    *(unsigned*)((char*)storage + 92) = 0;
    return storage;
}
