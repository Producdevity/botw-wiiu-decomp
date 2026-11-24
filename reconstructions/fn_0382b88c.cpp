extern "C" void fn_03b9f3f4(void*);
extern "C" void fn_03b9f5f0(void*);

extern "C" void fn_0382b88c(void* object)
{
    void* child = *(void**)((char*)object + 0x40);
    if (child != 0 && !((*(unsigned char*)((char*)child + 0x50) >> 1) & 1)) {
        void* target = child;
        fn_03b9f3f4(target);
        fn_03b9f5f0(*(void**)((char*)object + 0x40));
    }
}
