extern "C" void *fn_0308e578(unsigned);
extern "C" int data_10360ea0;

extern "C" void fn_03a66920(void *self)
{
  if (self != 0 || (self = fn_0308e578(0xCU)) != 0) {
    *(void **)((char *)self + 8) = &data_10360ea0;
    *(int *)((char *)self + 0) = 0x20;
    *((char *)self + 4) = 0;
  }
}
