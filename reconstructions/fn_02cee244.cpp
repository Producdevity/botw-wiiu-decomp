extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void*, const void*);
extern "C" void* fn_0312534c(void*);
extern "C" unsigned char data_101dc0b4[];

extern "C" void* fn_02cee244(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(132);
        if (!storage)
            return storage;
    }
    fn_02c6430c(storage, arg);
    *(const void**)((char*)storage + 12) = data_101dc0b4;
    fn_0312534c((char*)storage + 20);
    return storage;
}
