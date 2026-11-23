extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_036026d0(void*, const void*);
extern "C" unsigned char data_1022212c[];

extern "C" void* fn_02f07670(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_036026d0(storage, a);
    *(const void**)((char*)storage + 16) = data_1022212c;
    *(unsigned*)((char*)storage + 160) = 0;
    return storage;
}
