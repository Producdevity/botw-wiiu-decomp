extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025642f0(void*, const void*);
extern "C" unsigned char data_10115f30[];

extern "C" void* fn_026defa4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_025642f0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10115f30;
    return storage;
}
