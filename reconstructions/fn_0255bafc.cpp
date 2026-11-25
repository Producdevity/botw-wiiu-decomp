extern "C" float fn_02b6bce4(void *, void *);

extern "C" float fn_0255bafc(void *self)
{
  float *base = *(float **)((char *)self + 0x2C);
  void ***slot = (void ***)((char *)self + 0x20);
  float offset = fn_02b6bce4(*(void **)self, **slot);
  float sum = *base + offset;
  return sum;
}
