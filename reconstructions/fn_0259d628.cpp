extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025f7b90(void*, const void*);
extern "C" unsigned char data_100e9284[];

extern "C" void* fn_0259d628(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025f7b90(storage, a);
    *(const void**)((char*)storage + 12) = data_100e9284;
    *(unsigned*)((char*)storage + 48) = 0;
    return storage;
}
