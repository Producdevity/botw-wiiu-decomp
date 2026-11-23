extern "C" int data_10053d88;
extern "C" void* fn_022091d8(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0220be00(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_022091d8(storage, arg);
    *(const void**)((char*)storage + 12) = &data_10053d88;
    void* member = (char*)storage + 44;
    if (!member) {
        member = fn_0308e578(4);
        if (!member)
            return storage;
    }
    {
        *(unsigned*)((char*)member + 0) = 0;
    }
    return storage;
}
