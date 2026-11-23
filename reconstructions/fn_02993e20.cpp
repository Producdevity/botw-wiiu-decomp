extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02729994(void*, const void*);
extern "C" unsigned char data_10175e0c[];

extern "C" void* fn_02993e20(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02729994(storage, a);
    *(const void**)((char*)storage + 12) = data_10175e0c;
    *(unsigned*)((char*)storage + 96) = 0;
    *(unsigned char*)((char*)storage + 100) = 0;
    return storage;
}
