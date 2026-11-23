extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_10038fbc[];

extern "C" void* fn_02185148(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(168);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10038fbc;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    *(unsigned*)((char*)storage + 24) = 0;
    {
        char* m1 = (char*)storage + 28;
        if (!m1)
            m1 = (char*)fn_0308e578(4);
        if (m1) {
            *(unsigned*)(m1) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 32;
        if (!m2)
            m2 = (char*)fn_0308e578(4);
        if (m2) {
            *(unsigned*)(m2) = 0;
        }
    }
    {
        char* m3 = (char*)storage + 36;
        if (!m3)
            m3 = (char*)fn_0308e578(4);
        if (m3) {
            *(unsigned*)(m3) = 0;
        }
    }
    return storage;
}
