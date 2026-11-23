extern "C" int data_100deefc;
extern "C" void* fn_037b7cf0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0255b894(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = &data_100deefc;
    void* member = (char*)storage + 32;
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
