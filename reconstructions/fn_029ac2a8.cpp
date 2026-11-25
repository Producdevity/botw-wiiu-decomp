extern "C" void fn_026a80e8(void*);

extern "C" void fn_029ac2a8(void* self)
{
    fn_026a80e8(self);
    int count = *(int*)((char*)self + 0x68);
    if (count != 0) {
        count = count - 1;
        *(int*)((char*)self + 0x68) = count;
        if (count == 1) {
            *(unsigned char*)((char*)self + 0x64) = 1;
        }
    }
}
