extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0327a614(void*, const void*);
extern "C" unsigned char data_100d9cec[];

extern "C" void* fn_0253dd60(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(176);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0327a614(storage, a);
    *(const void**)((char*)storage + 12) = data_100d9cec;
    *(unsigned char*)((char*)storage + 168) = 0;
    *(unsigned*)((char*)storage + 172) = -1;
    return storage;
}
