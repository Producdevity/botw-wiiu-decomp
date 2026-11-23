extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0240dadc(void*, const void*);
extern "C" unsigned char data_100acc2c[];

extern "C" void* fn_0240e4a4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_0240dadc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100acc2c;
    return storage;
}
