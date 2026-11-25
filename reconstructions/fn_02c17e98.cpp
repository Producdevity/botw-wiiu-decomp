extern "C" bool fn_02c17e98(void *object, int value)
{
  int *field = (int *)((char *)object + 56);
  int bits = *field & value;
  return bits != 0;
}
