extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d53ac(void*, const void*);
extern "C" unsigned char data_10047c6c[];

extern "C" void* fn_021d774c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    fn_021d53ac(storage, arg);
    *(const void**)((char*)storage + 12) = data_10047c6c;
    return storage;
}
