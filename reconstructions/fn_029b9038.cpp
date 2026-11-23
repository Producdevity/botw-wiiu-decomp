extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029b995c(void*, const void*);
extern "C" unsigned char data_1017b884[];

extern "C" void* fn_029b9038(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029b995c(storage, a);
    *(const void**)((char*)storage + 16) = data_1017b884;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
