extern "C" void fn_021cce40(void*);
extern "C" void fn_0233f870(void** self)
{
    fn_021cce40(self);
    char* owner = *(char**)((char*)*self + 0x330);
    if (owner != 0) {
        char* target = 0;
        if (*(int*)(owner + 0x1C) != 0) {
            owner = *(char**)(owner + 0x24);
            target = *(char**)owner;
        }
        *(unsigned char*)(target + 0x12) |= 0x20;
    }
}
