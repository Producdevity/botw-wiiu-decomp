extern "C" int data_10162170;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0290ba30(void *, const void *);
extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_0378c550(void *);

extern "C" void* fn_0290e898(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0290ba30(storage, a);
    *(const void**)((char*)storage + 12) = &data_10162170;
    void* member = (char*)storage + 72;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    fn_0378c550((char*)storage + 80);
    return storage;
}
