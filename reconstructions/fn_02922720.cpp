extern "C" int data_101668bc;
extern "C" void* fn_02921fe0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02922720(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    fn_02921fe0(storage, arg);
    *(const void**)((char*)storage + 12) = &data_101668bc;
    void* member = (char*)storage + 36;
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
