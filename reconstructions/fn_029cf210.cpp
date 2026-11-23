extern "C" int data_1017f644;
extern "C" float data_1017f628;
extern "C" void* fn_030ff6a0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029cf210(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = &data_1017f644;
    *(unsigned*)((char*)storage + 20) = 0;
    *(float*)((char*)storage + 24) = data_1017f628;
    if (!((char*)storage + 28))
        fn_0308e578(12);
    *(unsigned*)((char*)storage + 40) = 1;
    *(unsigned char*)((char*)storage + 44) = 1;
    return storage;
}
