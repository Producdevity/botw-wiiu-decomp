extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_10040ca4[];

extern "C" void* fn_021b4928(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 12) = data_10040ca4;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    return storage;
}
