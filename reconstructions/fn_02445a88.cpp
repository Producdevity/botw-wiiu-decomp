extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0246c5f4(void*, const void*);
extern "C" unsigned char data_100b6d80[];

extern "C" void* fn_02445a88(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(256);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0246c5f4(storage, a);
    *(const void**)((char*)storage + 12) = data_100b6d80;
    *(unsigned*)((char*)storage + 252) = 0;
    return storage;
}
