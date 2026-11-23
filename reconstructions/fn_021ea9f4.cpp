extern "C" int data_1004ce10;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_021ead54(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_021ea9f4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_021ead54(storage, a);
    *(const void**)((char*)storage + 12) = &data_1004ce10;
    void* member = (char*)storage + 40;
    if (!member) {
        member = fn_0308e578(8);
        if (!member)
            return storage;
    }
    {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    return storage;
}
