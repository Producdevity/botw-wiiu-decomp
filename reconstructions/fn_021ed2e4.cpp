extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0222645c(void*, const void*);
extern "C" unsigned char data_1004d8f4[];

extern "C" void* fn_021ed2e4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0222645c(storage, a);
    *(const void**)((char*)storage + 12) = data_1004d8f4;
    *(unsigned*)((char*)storage + 92) = 0;
    return storage;
}
