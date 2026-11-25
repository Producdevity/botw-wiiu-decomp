extern "C" bool fn_035bc624(void *object, int value)
{
  unsigned char *field = (unsigned char *)((char *)object + 0);
  int bits = *field & value;
  return bits != 0;
}
