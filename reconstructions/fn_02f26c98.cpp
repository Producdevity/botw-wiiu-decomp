extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02f07670(void*, const void*);
extern "C" unsigned char data_10227ad8[];

extern "C" void* fn_02f26c98(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(168);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02f07670(storage, a);
    *(const void**)((char*)storage + 16) = data_10227ad8;
    *(unsigned*)((char*)storage + 164) = 0;
    return storage;
}
