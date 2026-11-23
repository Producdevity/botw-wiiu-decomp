extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03280f5c(void*, const void*);
extern "C" unsigned char data_1001be98[];
extern "C" unsigned char data_1001bfb0[];

extern "C" void* fn_020ddf34(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_03280f5c(storage, a);
    *(const void**)((char*)storage + 12) = data_1001be98;
    *(const void**)((char*)storage + 24) = data_1001bfb0;
    *(unsigned char*)((char*)storage + 44) = 0;
    return storage;
}
