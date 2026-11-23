extern "C" int data_100877ec;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02333c3c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_100877ec;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned char*)((char*)storage + 20) = 0;
    *(unsigned char*)((char*)storage + 21) = 0;
    if (!((char*)storage + 24))
        fn_0308e578(48);
    return storage;
}
