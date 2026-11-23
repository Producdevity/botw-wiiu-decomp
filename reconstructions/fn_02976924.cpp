extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02975574(void*, const void*);
extern "C" unsigned char data_10172668[];

extern "C" void* fn_02976924(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02975574(storage, a);
    *(const void**)((char*)storage + 12) = data_10172668;
    *(unsigned*)((char*)storage + 84) = 0;
    return storage;
}
