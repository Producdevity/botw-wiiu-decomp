extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0246634c(void*, const void*);
extern "C" unsigned char data_100bcbf4[];

extern "C" void* fn_02465400(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0246634c(storage, a);
    *(const void**)((char*)storage + 12) = data_100bcbf4;
    *(unsigned*)((char*)storage + 92) = 0;
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
