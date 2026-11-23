extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_100bca84[];
extern "C" const float data_100bca18;

extern "C" void* fn_02463ce4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0379468c(storage, a);
    *(const void**)((char*)storage + 12) = data_100bca84;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    *(unsigned*)((char*)storage + 24) = 0;
    {
        char* m1 = (char*)storage + 28;
        if (!m1)
            m1 = (char*)fn_0308e578(8);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 36;
        if (!m2)
            m2 = (char*)fn_0308e578(8);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
        }
    }
    *(float*)((char*)storage + 44) = data_100bca18;
    *(unsigned*)((char*)storage + 48) = 4;
    return storage;
}
