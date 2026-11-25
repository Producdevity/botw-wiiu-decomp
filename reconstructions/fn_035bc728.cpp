extern "C" bool fn_035bc728(void *object, int value)
{
  int *field = (int *)((char *)object + 0);
  int bits = *field & value;
  return bits != 0;
}
