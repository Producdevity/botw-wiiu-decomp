extern "C" int data_10029e20;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02136314(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_10029e20;
    *(unsigned char*)((char*)storage + 16) = 1;
    void* member = (char*)storage + 20;
    if (!member) {
        member = fn_0308e578(28);
        if (!member)
            return storage;
    }
    {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
        *(unsigned*)((char*)member + 20) = 0;
        *(unsigned*)((char*)member + 24) = 0;
    }
    return storage;
}
