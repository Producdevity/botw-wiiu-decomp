extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02f07670(void*, const void*);
extern "C" unsigned char data_102276c4[];

extern "C" void* fn_02f25e6c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(172);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02f07670(storage, a);
    *(const void**)((char*)storage + 16) = data_102276c4;
    *(unsigned*)((char*)storage + 164) = 0;
    *(unsigned*)((char*)storage + 168) = -1;
    return storage;
}
