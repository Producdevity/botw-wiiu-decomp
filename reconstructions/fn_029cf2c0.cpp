extern "C" void fn_03b9fe0c(void*, int, float);

extern "C" void fn_029cf2c0(void* self)
{
    void* owner = *(void**)self;
    void* manager = *(void**)((char*)owner + 0x398);
    fn_03b9fe0c(*(void**)((char*)manager + 0x44), 0x1F, *(float*)((char*)self + 0x18));
    owner = *(void**)self;
    manager = *(void**)((char*)owner + 0x398);
    fn_03b9fe0c(*(void**)((char*)manager + 0x40), 0x1F, *(float*)((char*)self + 0x18));
}
