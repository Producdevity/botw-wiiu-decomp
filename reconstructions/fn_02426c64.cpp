extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024252d4(void*, const void*);
extern "C" unsigned char data_100b19bc[];

extern "C" void* fn_02426c64(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_024252d4(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b19bc;
    return storage;
}
