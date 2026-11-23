extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026749c0(void*, const void*);
extern "C" unsigned char data_101065a8[];

extern "C" void* fn_0267536c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_026749c0(storage, arg);
    *(const void**)((char*)storage + 12) = data_101065a8;
    return storage;
}
