extern "C" int data_100a6f5c;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_023e92ac(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_023ea418(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_023e92ac(storage, a);
    *(const void**)((char*)storage + 12) = &data_100a6f5c;
    void* member = (char*)storage + 84;
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
