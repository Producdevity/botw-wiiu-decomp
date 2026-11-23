extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02202a44(void*, const void*);
extern "C" unsigned char data_10050fac[];

extern "C" void* fn_021fdfc8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02202a44(storage, a);
    *(const void**)((char*)storage + 12) = data_10050fac;
    *(unsigned*)((char*)storage + 24) = 0;
    return storage;
}
