extern "C" void fn_037dfba8(void*, int);
extern "C" int fn_037f59d8(void*);

extern "C" void fn_037f89fc(void* self)
{
    int flagsOffset = 8;
    if ((*(unsigned*)((char*)self + 8) >> 2) & 1) {
        void* owner = *(void**)((char*)self + 0x14);
        fn_037dfba8(owner, -fn_037f59d8(self));
        *(unsigned*)((char*)self + flagsOffset) &= 0xfffffffb;
    }
}
