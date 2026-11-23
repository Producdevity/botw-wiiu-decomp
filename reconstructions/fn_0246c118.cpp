extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022a0ce4(void*, const void*);
extern "C" unsigned char data_100bdef8[];

extern "C" void* fn_0246c118(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022a0ce4(storage, a);
    *(const void**)((char*)storage + 12) = data_100bdef8;
    *(unsigned*)((char*)storage + 116) = 0;
    *(unsigned*)((char*)storage + 120) = 0;
    return storage;
}
