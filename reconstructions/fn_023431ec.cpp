extern "C" int data_1008a224;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0234245c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_023431ec(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0234245c(storage, a);
    *(const void**)((char*)storage + 12) = &data_1008a224;
    void* member = (char*)storage + 88;
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
