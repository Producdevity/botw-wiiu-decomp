extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032d3558(void*, const void*);
extern "C" unsigned char data_1001848c[];

extern "C" void* fn_020c8b84(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(56);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_032d3558(storage, a);
    *(const void**)((char*)storage + 12) = data_1001848c;
    *(unsigned*)((char*)storage + 52) = 0;
    return storage;
}
