extern "C" void fn_02a2c144(void*);
extern "C" int fn_02a2c398(void* self)
{
    unsigned int* flagsField = (unsigned int*)((char*)self + 0x4C);
    fn_02a2c144(self);
    unsigned int flags = *flagsField;
    if ((flags >> 8) & 1) {
        return *(int*)((char*)self + 0x324);
    }
    int disabled = (flags >> 7) & 1;
    int result = 0;
    if (!disabled) {
        result = *(int*)((char*)self + 0x328);
    }
    return result;
}
