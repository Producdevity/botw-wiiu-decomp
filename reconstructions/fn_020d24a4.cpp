extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02100970(void*, const void*);
extern "C" unsigned char data_10019c6c[];

extern "C" void* fn_020d24a4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(152);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02100970(storage, a);
    *(const void**)((char*)storage + 12) = data_10019c6c;
    *(unsigned*)((char*)storage + 144) = 0;
    *(unsigned*)((char*)storage + 148) = 0;
    return storage;
}
