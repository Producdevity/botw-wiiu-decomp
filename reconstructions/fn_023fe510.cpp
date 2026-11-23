extern "C" int data_100a9e04;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_023fe8ec(void* storage, const void* arg);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_023fe510(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_023fe8ec(storage, a);
    *(const void**)((char*)storage + 12) = &data_100a9e04;
    *(int*)((char*)storage + 24) = 0;
    void* field = (char*)storage + 24;
    void* member = (char*)field + 4;
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
