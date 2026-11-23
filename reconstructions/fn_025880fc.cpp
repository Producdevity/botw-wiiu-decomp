extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02589a64(void*, const void*);
extern "C" unsigned char data_100e5dec[];

extern "C" void* fn_025880fc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_02589a64(storage, arg);
    *(const void**)((char*)storage + 12) = data_100e5dec;
    return storage;
}
