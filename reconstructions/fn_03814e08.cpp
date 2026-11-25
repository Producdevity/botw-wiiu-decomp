extern "C" void *fn_0308e578(unsigned);
extern "C" int data_10321ff8;

extern "C" void fn_03814e08(void *self)
{
  if (self != 0 || (self = fn_0308e578(0xCU)) != 0) {
    *(int *)((char *)self + 0) = 0;
    int *table = &data_10321ff8;
    *(int *)((char *)self + 4) = 0;
    *(void **)((char *)self + 8) = table;
  }
}
