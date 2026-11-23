extern "C" int data_101bdb94;
extern "C" int data_101bdcf4;
extern "C" void* fn_02bfbc78(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02bfbfa0(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02bfbc78(storage, a);
    *(const void**)((char*)storage + 12) = &data_101bdb94;
    *(const void**)((char*)storage + 36) = &data_101bdcf4;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    *(unsigned*)((char*)storage + 48) = 0;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned*)((char*)storage + 56) = 0;
    return storage;
}
