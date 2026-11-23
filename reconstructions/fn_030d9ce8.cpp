extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030beae0(void*, const void*);
extern "C" unsigned char data_1027c984[];

extern "C" void* fn_030d9ce8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_030beae0(storage, arg);
    *(const void**)((char*)storage + 16) = data_1027c984;
    return storage;
}
