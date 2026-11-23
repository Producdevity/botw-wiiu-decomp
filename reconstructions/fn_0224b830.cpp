extern "C" int data_10060ea0;
extern "C" void* fn_0379468c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);
struct Vector3;
extern "C" Vector3* fn_03793f2c(Vector3 *);

extern "C" void* fn_0224b830(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = &data_10060ea0;
    void* member = (char*)storage + 16;
    if (!member)
        member = fn_0308e578(24);
    if (member) {
        *(unsigned*)((char*)member + 0) = 0;
        *(unsigned*)((char*)member + 4) = 0;
        *(unsigned*)((char*)member + 8) = 0;
        *(unsigned*)((char*)member + 12) = 0;
        *(unsigned*)((char*)member + 16) = 0;
        *(unsigned*)((char*)member + 20) = 0;
    }
    fn_03793f2c((Vector3 *)((char*)storage + 40));
    if (!((char*)storage + 52))
        fn_0308e578(36);
    return storage;
}
