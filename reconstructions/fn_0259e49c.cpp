extern "C" int data_100e9630;
extern "C" void* fn_037b7cf0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0259e49c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = &data_100e9630;
    void* member = (char*)storage + 32;
    if (!member)
        member = fn_0308e578(24);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
        *(unsigned*)((char*)member + 20) = 0;
    }
    *(unsigned*)((char*)storage + 56) = 3;
    return storage;
}
