extern "C" float data_101636c8;
extern "C" int data_10163750;
extern "C" void* fn_029128b4(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02914d08(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_029128b4(storage, a);
    *(const void**)((char*)storage + 12) = &data_10163750;
    *(unsigned*)((char*)storage + 32) = 0;
    *(float*)((char*)storage + 36) = data_101636c8;
    *(unsigned char*)((char*)storage + 40) = 0;
    *(unsigned char*)((char*)storage + 41) = 0;
    *(unsigned char*)((char*)storage + 42) = 0;
    *(unsigned char*)((char*)storage + 43) = 1;
    return storage;
}
