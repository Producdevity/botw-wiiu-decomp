extern "C" int fn_037a4ed8(void*);

extern "C" void fn_02167a4c(void** arg0)
{
    char* obj = (char*)fn_037a4ed8(*arg0);
    if (obj != 0) {
        unsigned int b = *(unsigned int*)(obj + 0xA8);
        unsigned int a = *(unsigned short*)(obj + 0x60);
        a &= 0xFFFFFFCF;
        b &= 0xFFFFFFBF;
        *(unsigned short*)(obj + 0x60) = a;
        *(unsigned int*)(obj + 0xA8) = b;
    }
}
