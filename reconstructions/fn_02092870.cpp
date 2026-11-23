extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02091988(void*, const void*);
extern "C" unsigned char data_100124ec[];

extern "C" void* fn_02092870(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    fn_02091988(storage, arg);
    *(const void**)((char*)storage + 12) = data_100124ec;
    return storage;
}
