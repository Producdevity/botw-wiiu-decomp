extern "C" unsigned char data_1017ba04[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_030ff6a0(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029b9518(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = data_1017ba04;
    void* member = (char*)storage + 20;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned char*)((char*)storage + 28) = 0;
    return storage;
}
