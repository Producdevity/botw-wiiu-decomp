extern "C" int data_101b39b4;
extern "C" void* fn_02aa9b78(void *, void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02b9f9bc(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02aa9b78(storage, (void *)arg);
    *(const void**)((char*)storage + 12) = &data_101b39b4;
    void* member = (char*)storage + 16;
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
