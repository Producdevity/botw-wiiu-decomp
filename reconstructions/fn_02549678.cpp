extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02545fec(void*, const void*);
extern "C" unsigned char data_100dbdac[];

extern "C" void* fn_02549678(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02545fec(storage, a);
    *(const void**)((char*)storage + 12) = data_100dbdac;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
