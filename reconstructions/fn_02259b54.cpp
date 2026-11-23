extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0213410c(void*, const void*);
extern "C" unsigned char data_100640a8[];

extern "C" void* fn_02259b54(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0213410c(storage, a);
    *(const void**)((char*)storage + 12) = data_100640a8;
    *(unsigned*)((char*)storage + 100) = 0;
    return storage;
}
