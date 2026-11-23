extern "C" int data_1015777c;
extern "C" void* fn_025a0360(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_028bf6a8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_025a0360(storage, arg);
    *(const void**)((char*)storage + 12) = &data_1015777c;
    *(unsigned*)((char*)storage + 60) = 0;
    *(unsigned char*)((char*)storage + 64) = 0;
    *(unsigned char*)((char*)storage + 65) = 0;
    *(unsigned char*)((char*)storage + 66) = 0;
    *(unsigned char*)((char*)storage + 67) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    if (!((char*)storage + 72))
        fn_0308e578(36);
    return storage;
}
