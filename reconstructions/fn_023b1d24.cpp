extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_1009df30[];
extern "C" const float data_1009de0c;

extern "C" void* fn_023b1d24(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1009df30;
    {
        char* m1 = (char*)storage + 16;
        if (!m1)
            m1 = (char*)fn_0308e578(24);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
            *(unsigned*)(m1 + 20) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 40;
        if (!m2)
            m2 = (char*)fn_0308e578(16);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
            *(unsigned*)(m2 + 12) = 0;
        }
    }
    *(float*)((char*)storage + 56) = data_1009de0c;
    *(float*)((char*)storage + 60) = data_1009de0c;
    *(float*)((char*)storage + 64) = data_1009de0c;
    return storage;
}
