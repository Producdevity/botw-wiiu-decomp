extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02890b2c(void*, const void*);
extern "C" unsigned char data_1014f904[];

extern "C" void* fn_028911a8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02890b2c(storage, a);
    *(const void**)((char*)storage + 12) = data_1014f904;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
