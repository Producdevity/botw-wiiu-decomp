extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02898410(void*, const void*);
extern "C" unsigned char data_100c7cdc[];

extern "C" void* fn_024c3414(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02898410(storage, a);
    *(const void**)((char*)storage + 12) = data_100c7cdc;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
