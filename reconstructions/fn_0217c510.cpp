extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020c2a28(void*, const void*);
extern "C" unsigned char data_100372a0[];

extern "C" void* fn_0217c510(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_020c2a28(storage, arg);
    *(const void**)((char*)storage + 12) = data_100372a0;
    return storage;
}
