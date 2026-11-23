extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d0464(void*, const void*);
extern "C" unsigned char data_100463ac[];

extern "C" void* fn_021d0a38(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021d0464(storage, a);
    *(const void**)((char*)storage + 12) = data_100463ac;
    *(unsigned*)((char*)storage + 28) = 0;
    *(unsigned char*)((char*)storage + 32) = 0;
    return storage;
}
