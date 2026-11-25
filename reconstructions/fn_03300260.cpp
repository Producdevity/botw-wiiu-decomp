extern "C" bool fn_03300260(void *object, int value)
{
  unsigned short *field = (unsigned short *)object;
  unsigned short bits = (*field & value) != 0;
  return bits;
}
