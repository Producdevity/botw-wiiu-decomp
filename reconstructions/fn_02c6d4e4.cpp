extern "C" int data_101ca3b8;
extern "C" void* fn_02c6430c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02c6d4e4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_02c6430c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_101ca3b8;
    void* member = (char*)storage + 20;
    if (!member) {
        member = fn_0308e578(40);
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
        *(unsigned*)((char*)member + 28) = 0;
        *(unsigned*)((char*)member + 32) = 0;
        *(unsigned*)((char*)member + 36) = 0;
    }
    return storage;
}
