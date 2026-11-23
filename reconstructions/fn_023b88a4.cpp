extern "C" int data_1009f17c;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_023b6480(void* storage, const void* arg);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_023b88a4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(160);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_023b6480(storage, a);
    *(const void**)((char*)storage + 12) = &data_1009f17c;
    *(int*)((char*)storage + 148) = 0;
    void* field = (char*)storage + 148;
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
