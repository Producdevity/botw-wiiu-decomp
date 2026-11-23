extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022a7ea0(void*, const void*);
extern "C" unsigned char data_1003424c[];

extern "C" void* fn_0216af84(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022a7ea0(storage, a);
    *(const void**)((char*)storage + 12) = data_1003424c;
    *(unsigned*)((char*)storage + 24) = 0;
    return storage;
}
