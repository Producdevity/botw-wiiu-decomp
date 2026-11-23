extern "C" unsigned char data_10063100[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02254404(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02256f18(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(268);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02254404(storage, a);
    *(const void**)((char*)storage + 12) = data_10063100;
    void* member = (char*)storage + 256;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned char*)((char*)storage + 264) = 0;
    return storage;
}
