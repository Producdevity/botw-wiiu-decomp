extern "C" unsigned char data_10049ae8[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0245d664(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_021ddea0(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0245d664(storage, a);
    *(const void**)((char*)storage + 12) = data_10049ae8;
    void* member = (char*)storage + 64;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned*)((char*)storage + 72) = 0;
    return storage;
}
