extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02231678(void*, const void*);
extern "C" unsigned char data_10052e2c[];

extern "C" void* fn_02206dfc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_02231678(storage, arg);
    *(const void**)((char*)storage + 12) = data_10052e2c;
    return storage;
}
