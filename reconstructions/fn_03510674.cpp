extern "C" void fn_03548814(void*);

extern "C" void fn_03510674(void* object)
{
    int state = *(int*)((char*)object + 0x138);
    if (state != 1) {
        fn_03548814((char*)object + 0xC);
        *(int*)((char*)object + 0x138) = 1;
    }
}
