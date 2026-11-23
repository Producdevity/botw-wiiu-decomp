extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_10078be4[];
extern "C" const float data_10078b70;

extern "C" void* fn_022e0114(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10078be4;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    {
        char* m1 = (char*)storage + 24;
        if (!m1)
            m1 = (char*)fn_0308e578(12);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 36;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_10078b70;
            *(float*)(m2 + 4) = data_10078b70;
            *(float*)(m2 + 8) = data_10078b70;
        }
    }
    return storage;
}
