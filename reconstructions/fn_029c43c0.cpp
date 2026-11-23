extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c84d4(void*, const void*);
extern "C" unsigned char data_1017d53c[];

extern "C" void* fn_029c43c0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(176);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029c84d4(storage, a);
    *(const void**)((char*)storage + 16) = data_1017d53c;
    *(unsigned char*)((char*)storage + 172) = 0;
    return storage;
}
