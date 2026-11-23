extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02897408(void*, const void*);
extern "C" unsigned char data_10150f9c[];

extern "C" void* fn_02896f2c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02897408(storage, a);
    *(const void**)((char*)storage + 12) = data_10150f9c;
    *(unsigned*)((char*)storage + 72) = 0;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
