extern "C" bool fn_0338ba4c(void *object, int value)
{
  unsigned short *field = (unsigned short *)object;
  unsigned short bits = (*field & value) != 0;
  return bits;
}
