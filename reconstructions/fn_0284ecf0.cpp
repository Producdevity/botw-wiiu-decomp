extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02851ab8(void*, const void*);
extern "C" unsigned char data_10145c50[];

extern "C" void* fn_0284ecf0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02851ab8(storage, a);
    *(const void**)((char*)storage + 12) = data_10145c50;
    *(unsigned*)((char*)storage + 60) = 0;
    *(unsigned*)((char*)storage + 64) = 0;
    return storage;
}
