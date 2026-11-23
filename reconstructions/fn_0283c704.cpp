extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025a0360(void*, const void*);
extern "C" unsigned char data_10142e1c[];

extern "C" void* fn_0283c704(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025a0360(storage, a);
    *(const void**)((char*)storage + 12) = data_10142e1c;
    *(unsigned*)((char*)storage + 60) = 0;
    *(unsigned char*)((char*)storage + 64) = 0;
    return storage;
}
