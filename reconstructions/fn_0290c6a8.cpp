extern "C" int data_10161af4;
extern "C" float data_10161a78;
extern "C" void* fn_037b7cf0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0290c6a8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_037b7cf0(storage, a);
    *(const void**)((char*)storage + 12) = &data_10161af4;
    void* member = (char*)storage + 32;
    if (!member)
        member = fn_0308e578(16);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
    }
    *(float*)((char*)storage + 48) = data_10161a78;
    *(unsigned*)((char*)storage + 52) = 1;
    if (!((char*)storage + 56))
        fn_0308e578(12);
    return storage;
}
