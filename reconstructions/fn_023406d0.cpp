extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02340144(void*, const void*);
extern "C" unsigned char data_100896a4[];

extern "C" void* fn_023406d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02340144(storage, arg);
    *(const void**)((char*)storage + 12) = data_100896a4;
    return storage;
}
