extern "C" int data_101623bc;
extern "C" float data_101622d8;
extern "C" void* fn_025918dc(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0290f224(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(216);
        if (!storage)
            return storage;
    }
    fn_025918dc(storage, arg);
    *(const void**)((char*)storage + 12) = &data_101623bc;
    void* member = (char*)storage + 188;
    if (!member)
        member = fn_0308e578(24);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
        *(unsigned*)((char*)member + 20) = 0;
    }
    *(float*)((char*)storage + 212) = data_101622d8;
    return storage;
}
