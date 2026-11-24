extern "C" int fn_02b29d28(void* object)
{
    char* slot = *(char**)((char*)object + 0xE8);
    slot = slot + 0x2BC;
    int* source = (*(int* (**)(void*))slot)(object);
    int value = 1;
    if (source != 0) {
        value = *source;
    }
    return value == 1;
}
