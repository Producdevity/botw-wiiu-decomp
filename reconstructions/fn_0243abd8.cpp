extern "C" int data_100b528c;
extern "C" void* fn_02436a20(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0243abd8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(232);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02436a20(storage, a);
    *(const void**)((char*)storage + 12) = &data_100b528c;
    void* member = (char*)storage + 200;
    if (!member)
        member = fn_0308e578(20);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
    }
    if (!((char*)storage + 220))
        fn_0308e578(12);
    return storage;
}
