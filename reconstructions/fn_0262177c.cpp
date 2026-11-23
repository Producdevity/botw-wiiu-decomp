extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025cf150(void*, const void*);
extern "C" unsigned char data_100f944c[];

extern "C" void* fn_0262177c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025cf150(storage, a);
    *(const void**)((char*)storage + 12) = data_100f944c;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
