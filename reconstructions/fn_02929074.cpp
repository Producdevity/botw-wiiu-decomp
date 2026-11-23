extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02550308(void*, const void*);
extern "C" unsigned char data_10167de4[];

extern "C" void* fn_02929074(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02550308(storage, a);
    *(const void**)((char*)storage + 12) = data_10167de4;
    *(unsigned*)((char*)storage + 136) = 0;
    return storage;
}
