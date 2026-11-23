extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e8910(void*, const void*);
extern "C" unsigned char data_1004c7ac[];

extern "C" void* fn_021e8e8c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021e8910(storage, a);
    *(const void**)((char*)storage + 12) = data_1004c7ac;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
