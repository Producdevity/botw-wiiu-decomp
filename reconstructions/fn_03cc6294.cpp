extern "C" void fn_03cc6294(void* object)
{
    int offset = 56;
    int* second = (int*)((char*)object + 60);
    char* first = (char*)object + offset;
    *(int*)first = 0;
    *second = 0;
}
