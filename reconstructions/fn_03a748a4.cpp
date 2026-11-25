extern "C" void fn_03a745e0(void*, void*);
extern "C" void fn_04347c50(int, int, int);

extern "C" int fn_03a748a4(void* self)
{
    fn_03a745e0(self, 0);
    int start = *(int*)self;
    int size = *(int*)((char*)self + 4);
    fn_04347c50(start + size, *(int*)((char*)self + 0xc), 0);
    *((unsigned char*)self + 0x10) |= 8;
    return 1;
}
