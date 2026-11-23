extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e4194(void*, const void*);
extern "C" unsigned char data_10052998[];

extern "C" void* fn_02205cf8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    fn_021e4194(storage, arg);
    *(const void**)((char*)storage + 12) = data_10052998;
    return storage;
}
