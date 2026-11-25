extern "C" int fn_02b48f70(void* self)
{
    self = *(void**)((char*)self + 0x70);
    if (self != 0) {
        (*(void (**)(void))(*(char**)((char*)self + 0x150) + 0x3C))();
        return 1;
    }
    return 0;
}
