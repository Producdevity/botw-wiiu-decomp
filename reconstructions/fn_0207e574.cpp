extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0207a9bc(void*, const void*);
extern "C" unsigned char data_1000e830[];

extern "C" void* fn_0207e574(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_0207a9bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1000e830;
    return storage;
}
