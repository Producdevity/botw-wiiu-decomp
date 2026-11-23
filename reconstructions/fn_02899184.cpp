extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02898bec(void*, const void*);
extern "C" unsigned char data_101518a8[];

extern "C" void* fn_02899184(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_02898bec(storage, arg);
    *(const void**)((char*)storage + 12) = data_101518a8;
    return storage;
}
