extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022c5338(void*, const void*);
extern "C" unsigned char data_100a7410[];

extern "C" void* fn_023ebc84(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    fn_022c5338(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a7410;
    return storage;
}
