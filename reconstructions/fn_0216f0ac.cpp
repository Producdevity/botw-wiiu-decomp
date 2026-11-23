extern "C" int data_10034b88;
extern "C" float data_10034ad8;
extern "C" void* fn_0216e6e4(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0216f0ac(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(152);
        if (!storage)
            return storage;
    }
    fn_0216e6e4(storage, arg);
    *(const void**)((char*)storage + 12) = &data_10034b88;
    void* member = (char*)storage + 128;
    if (!member)
        member = fn_0308e578(20);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
    }
    *(float*)((char*)storage + 148) = data_10034ad8;
    return storage;
}
