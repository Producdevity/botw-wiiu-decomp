extern "C" void fn_025f6f44(void *, void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_100f2cb8;

extern "C" void fn_025f7418(void *object)
{
    fn_025f6f44(object, (char *)object + 0x38);
    fn_037b8284(object, &data_100f2cb8, 0);
}
