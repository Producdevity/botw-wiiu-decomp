extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d6acc(void*, const void*);
extern "C" unsigned char data_10047ae4[];

extern "C" void* fn_021d73f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(116);
        if (!storage)
            return storage;
    }
    fn_021d6acc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10047ae4;
    return storage;
}
