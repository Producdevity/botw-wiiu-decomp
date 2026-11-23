extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0216e6e4(void*, const void*);
extern "C" unsigned char data_10046570[];

extern "C" void* fn_021d1958(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    fn_0216e6e4(storage, arg);
    *(const void**)((char*)storage + 12) = data_10046570;
    return storage;
}
