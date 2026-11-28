extern "C" void fn_026ee3ec(void *);
extern "C" void fn_0383e968(void *, int, int, int);
extern "C" int data_10114880;

extern "C" void fn_026d7b0c(void **object)
{
    fn_026ee3ec(object);
    fn_0383e968(*object, (int)&data_10114880, 2, (int)((char *)object + 0x7C));
}
