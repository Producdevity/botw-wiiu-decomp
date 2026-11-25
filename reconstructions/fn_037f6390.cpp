extern "C" void fn_037dfb98(void*, int);
extern "C" int fn_037f59d8(void*);

extern "C" void fn_037f6390(void* self)
{
    int enabled = (*(unsigned*)((char*)self + 8) >> 1) & 1;
    if (enabled) {
        void* owner = *(void**)((char*)self + 0x14);
        fn_037dfb98(owner, -fn_037f59d8(self));
        *(unsigned*)((char*)self + 8) &= 0xfffffffd;
    }
}
