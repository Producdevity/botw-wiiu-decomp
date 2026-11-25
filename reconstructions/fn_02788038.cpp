extern "C" float fn_02b6bce4(void *, void *);

extern "C" float fn_02788038(void *self)
{
  return **(float **)((char *)self + 0x24) + fn_02b6bce4(*(void **)self, **(void ***)((char *)self + 0x20));
}
