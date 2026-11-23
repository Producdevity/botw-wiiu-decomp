extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0291a900(void*, const void*);
extern "C" unsigned char data_10164f50[];

extern "C" void* fn_0291b478(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0291a900(storage, a);
    *(const void**)((char*)storage + 12) = data_10164f50;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
