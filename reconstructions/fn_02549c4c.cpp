extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02545fec(void*, const void*);
extern "C" unsigned char data_100dbf30[];

extern "C" void* fn_02549c4c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02545fec(storage, a);
    *(const void**)((char*)storage + 12) = data_100dbf30;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
