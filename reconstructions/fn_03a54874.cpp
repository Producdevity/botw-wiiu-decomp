extern "C" void *fn_0308e578(unsigned);
extern "C" int data_1035ef64;

extern "C" void fn_03a54874(void *self)
{
  void *object = self;
  if (object != 0 || (object = fn_0308e578(0x1CU)) != 0) {
    *(int *)((char *)object + 0x14) = 0;
    *(int *)((char *)object + 0x18) = 0;
    *(int **)((char *)object + 0) = &data_1035ef64;
  }
}
