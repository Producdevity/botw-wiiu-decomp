extern "C" float data_101afd00;

extern "C" float fn_02b68620(void* self)
{
    char** owner = (char**)((char*)self + 0xE8);
    char* (**method)(void) = (char* (**)(void))(*owner + 0x16C);
    char* target = (*method)();
    if (target != 0) {
        return *(float*)(target + 0x25C) * *(float*)(target + 0x260);
    }
    return data_101afd00;
}
