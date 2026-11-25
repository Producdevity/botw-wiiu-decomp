extern "C" void fn_039d22d8(char *self, char *other, int mask)
{
  char *base = other;
  short offset = 4;
  char *field = self + 36;
  *(short *)field = (*(unsigned short *)(base + offset) & (unsigned short)mask) != 0;
}
