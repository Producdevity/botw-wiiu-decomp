extern "C" void fn_0258a598(void*);
extern "C" int fn_0339a0d0(void*);

extern "C" void fn_0258a1f0(void* self)
{
    **(char**)((char*)self + 0x28) = fn_0339a0d0(*(void**)self);
    fn_0258a598(self);
}
