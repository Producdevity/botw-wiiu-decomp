extern "C" int data_100b015c;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" float data_100b013c;
extern "C" void* fn_0241e4fc(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0241f814(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    fn_0241e4fc(storage, arg);
    *(const void**)((char*)storage + 12) = &data_100b015c;
    void* member = (char*)storage + 92;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    *(float*)((char*)storage + 100) = data_100b013c;
    return storage;
}
