extern "C" void fn_03f7e770(void* object)
{
    *(int*)((char*)object + 12) = 0;
    if (object != 0) {
        *(int*)((char*)object + 24) = 0;
    }
}
