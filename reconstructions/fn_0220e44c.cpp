extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221008c(void*, const void*);
extern "C" void fn_02b614e0(void *);
extern "C" unsigned char data_10054a74[];

extern "C" void* fn_0220e44c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(84);
        if (!storage)
            return storage;
    }
    fn_0221008c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10054a74;
    fn_02b614e0((char*)storage + 76);
    return storage;
}
