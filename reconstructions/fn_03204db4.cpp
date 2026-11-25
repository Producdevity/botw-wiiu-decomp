extern "C" void fn_0320b6a0(void *);

extern "C" void fn_03204db4(void *self)
{
  unsigned int flags = *(unsigned int *)((char *)self + 0x730);
  if ((((flags >> 0x13) & 1) ^ 1) != 0) {
    void *buffer = *(void **)((char *)self + 0x728);
    if (buffer != 0) {
      fn_0320b6a0(buffer);
      *(void **)((char *)self + 0x728) = 0;
    }
  }
}
