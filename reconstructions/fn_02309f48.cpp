extern "C" int data_10080dd8;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0241bc08(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02309f48(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0241bc08(storage, a);
    *(const void**)((char*)storage + 12) = &data_10080dd8;
    void* member = (char*)storage + 92;
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
