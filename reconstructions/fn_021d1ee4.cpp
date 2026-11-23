extern "C" unsigned char data_100466fc[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_023fe8ec(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_021d1ee4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_023fe8ec(storage, a);
    *(const void**)((char*)storage + 12) = data_100466fc;
    void* member = (char*)storage + 24;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
