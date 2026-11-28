extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_102c85f8;

extern "C" void fn_0345b508(void *self)
{
  void *object = self;
  if (object != 0 || (object = fn_0308e578(0xCU)) != 0) {
    *(int *)((char *)object + 0) = 0;
    *(int *)((char *)object + 4) = 0;
    *(int **)((char *)object + 8) = &data_102c85f8;
  }
}
