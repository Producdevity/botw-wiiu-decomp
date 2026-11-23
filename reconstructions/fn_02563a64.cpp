extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025633dc(void*, const void*);
extern "C" unsigned char data_100e0a0c[];

extern "C" void* fn_02563a64(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_025633dc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100e0a0c;
    return storage;
}
