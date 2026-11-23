extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02108060(void*, const void*);
extern "C" unsigned char data_10022428[];

extern "C" void* fn_02107590(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(152);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02108060(storage, a);
    *(const void**)((char*)storage + 12) = data_10022428;
    *(unsigned*)((char*)storage + 148) = 0;
    return storage;
}
