extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_1021746c;

extern "C" void fn_02e6b6dc(void *self)
{
  void *object = self;
  if (object != 0 || (object = fn_0308e578(0xCU)) != 0) {
    *(int *)((char *)object + 0) = 0;
    *(int *)((char *)object + 4) = 0;
    *(int **)((char *)object + 8) = &data_1021746c;
  }
}
