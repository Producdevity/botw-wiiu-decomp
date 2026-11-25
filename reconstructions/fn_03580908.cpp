extern "C" const unsigned char data_10263a00[];

extern "C" int fn_03580908(void *self)
{
  if (((*(void **)((char *)self + 0x5C) != 0 && *(unsigned int *)((char *)*(void **)((char *)self + 0x5C) + 0xC) == *(unsigned int *)((char *)self + 0x60)) ||
       **(unsigned char **)((char *)self + 4) != *data_10263a00) ||
      *((unsigned char *)self + 0x50) != 0) {
    return 1;
  }
  return 0;
}
