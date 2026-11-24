extern "C" void fn_03c1e728(void*);
extern "C" void fn_03c1e9b0(void*);

extern "C" void fn_03c3bd38(void* object)
{
    void* child = *(void**)((char*)object + 0x238);
    if (child != 0) {
        fn_03c1e728(child);
        fn_03c1e9b0(*(void**)((char*)object + 0x238));
        *(void**)((char*)object + 0x238) = 0;
        *(unsigned char*)((char*)object + 0xB0) = 0;
        *(unsigned char*)((char*)object + 0xB1) = 0;
    }
}
