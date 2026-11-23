extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d80fc(void*, const void*);
extern "C" unsigned char data_10047f88[];

extern "C" void* fn_021d7d38(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_021d80fc(storage, arg);
    *(const void**)((char*)storage + 12) = data_10047f88;
    return storage;
}
