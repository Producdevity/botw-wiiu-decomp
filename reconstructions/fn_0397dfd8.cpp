extern "C" void fn_0397dfd8(void* object, void* other, int index)
{
    char* table = *(char**)((char*)object + 88);
    char** entry = (char**)(table + (index << 2));
    *(char**)other = *entry;
}
