extern "C" unsigned char data_10010bcc[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02088c20(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02089b20(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(260);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02088c20(storage, a);
    *(const void**)((char*)storage + 12) = data_10010bcc;
    void* member = (char*)storage + 248;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    *(unsigned char*)((char*)storage + 256) = 0;
    return storage;
}
