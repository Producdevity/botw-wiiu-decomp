extern "C" void *fn_0308e578(unsigned);
extern "C" int data_103589ac;

extern "C" void fn_03a16a3c(void *self)
{
  void *object = self;
  if (object != 0 || (object = fn_0308e578(0x1CU)) != 0) {
    *(int *)((char *)object + 0x14) = 0;
    *(int *)((char *)object + 0x18) = 0;
    *(int **)((char *)object + 0) = &data_103589ac;
  }
}
