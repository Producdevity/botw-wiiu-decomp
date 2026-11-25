extern "C" bool fn_0204df64(void *object, int value)
{
  int *field = (int *)((char *)object + 0);
  int bits = *field & value;
  return bits != 0;
}
