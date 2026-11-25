extern "C" void fn_02f351b4(void *);
extern "C" void *fn_0308e578(unsigned);

extern "C" void *fn_02f3cfcc(void *self)
{
  if (self != 0 || (self = fn_0308e578(0x2C8U)) != 0) {
    fn_02f351b4(self);
    int zero = 0;
    *(int *)((char *)self + 0x2BC) = zero;
    *(int *)((char *)self + 0x2C0) = zero;
    *((char *)self + 0x2C4) = zero;
    *((char *)self + 0x2C5) = zero;
  }
  return self;
}
