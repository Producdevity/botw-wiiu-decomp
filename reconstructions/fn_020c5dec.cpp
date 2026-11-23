extern "C" int data_10017c28;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_020c5dec(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(56);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_10017c28;
    void* member = (char*)storage + 16;
    if (!member)
        member = fn_0308e578(36);
    if (member) {
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
    *(unsigned*)((char*)storage + 52) = 1;
    return storage;
}
