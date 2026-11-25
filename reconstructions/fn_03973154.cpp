extern "C" void fn_0308e6d0(void *);

extern "C" void fn_03973154(void *self)
{
  void *buffer = *(void **)self;
  if (buffer != 0) {
    fn_0308e6d0(buffer);
    *(void **)self = 0;
    unsigned short *flags = (unsigned short *)((char *)self + 4);
    *flags = *flags & 0xC000;
  }
}
