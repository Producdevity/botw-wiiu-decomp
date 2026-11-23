extern "C" int data_1017d0a8;
extern "C" void* fn_030ff6a0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029c2504(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(56);
        if (!storage)
            return storage;
    }
    fn_030ff6a0(storage, arg);
    *(const void**)((char*)storage + 16) = &data_1017d0a8;
    void* member = (char*)storage + 20;
    if (!member) {
        member = fn_0308e578(36);
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
    }
    return storage;
}
