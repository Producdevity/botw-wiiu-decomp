extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020c5dec(void*, const void*);
extern "C" unsigned char data_10017a0c[];

extern "C" void* fn_020c5a34(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020c5dec(storage, a);
    *(const void**)((char*)storage + 12) = data_10017a0c;
    *(unsigned*)((char*)storage + 56) = 0;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
