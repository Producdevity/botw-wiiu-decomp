extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d0a38(void*, const void*);
extern "C" unsigned char data_10036efc[];

extern "C" void* fn_0217baf8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021d0a38(storage, a);
    *(const void**)((char*)storage + 12) = data_10036efc;
    *(unsigned char*)((char*)storage + 36) = 0;
    return storage;
}
