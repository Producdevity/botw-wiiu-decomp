extern "C" bool fn_033d2ea4(void *object, int value)
{
  unsigned short *field = (unsigned short *)object;
  unsigned short bits = (*field & value) != 0;
  return bits;
}
