extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025ba5dc(void*, const void*);
extern "C" unsigned char data_1014d1ac[];

extern "C" void* fn_0288368c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025ba5dc(storage, a);
    *(const void**)((char*)storage + 12) = data_1014d1ac;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned char*)((char*)storage + 56) = 0;
    return storage;
}
