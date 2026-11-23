extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e7b34(void*, const void*);
extern "C" unsigned char data_10016eb8[];

extern "C" void* fn_020c13d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    fn_021e7b34(storage, arg);
    *(const void**)((char*)storage + 12) = data_10016eb8;
    return storage;
}
