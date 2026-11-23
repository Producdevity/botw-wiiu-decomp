extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025fd1ec(void*, const void*);
extern "C" unsigned char data_100f3c6c[];

extern "C" void* fn_025fcb54(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_025fd1ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_100f3c6c;
    return storage;
}
