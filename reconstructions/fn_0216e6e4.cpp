extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02357934(void*, const void*);
extern "C" unsigned char data_1003490c[];

extern "C" void* fn_0216e6e4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(128);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02357934(storage, a);
    *(const void**)((char*)storage + 12) = data_1003490c;
    *(unsigned*)((char*)storage + 120) = 0;
    *(unsigned*)((char*)storage + 124) = 0;
    return storage;
}
