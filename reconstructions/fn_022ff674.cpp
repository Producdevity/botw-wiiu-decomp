extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022ff980(void*, const void*);
extern "C" unsigned char data_1007dce0[];

extern "C" void* fn_022ff674(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022ff980(storage, a);
    *(const void**)((char*)storage + 12) = data_1007dce0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
