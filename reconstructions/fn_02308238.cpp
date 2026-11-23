extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023066e4(void*, const void*);
extern "C" unsigned char data_100803ec[];

extern "C" void* fn_02308238(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(116);
        if (!storage)
            return storage;
    }
    fn_023066e4(storage, arg);
    *(const void**)((char*)storage + 12) = data_100803ec;
    return storage;
}
