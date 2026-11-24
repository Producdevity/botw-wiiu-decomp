extern "C" void fn_02c204e0(void*, void*);

extern "C" void fn_02c20f0c(void* object)
{
    *(unsigned int*)((char*)object + 0x224) += 1;
    if (*(unsigned int*)((char*)object + 0x224) >= 3) {
        fn_02c204e0(object, 0);
        *(unsigned int*)((char*)object + 0x224) = 0;
    }
}
