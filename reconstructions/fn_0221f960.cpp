extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0220d048(void*, const void*);
extern "C" unsigned char data_10059660[];

extern "C" void* fn_0221f960(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0220d048(storage, a);
    *(const void**)((char*)storage + 12) = data_10059660;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
