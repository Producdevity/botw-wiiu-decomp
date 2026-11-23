extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023455c0(void*, const void*);
extern "C" unsigned char data_100815ec[];

extern "C" void* fn_0230b688(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_023455c0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100815ec;
    return storage;
}
