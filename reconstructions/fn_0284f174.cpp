extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02851ab8(void*, const void*);
extern "C" unsigned char data_10145dd0[];

extern "C" void* fn_0284f174(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_02851ab8(storage, arg);
    *(const void**)((char*)storage + 12) = data_10145dd0;
    return storage;
}
