extern "C" bool fn_033d2eb8(void *object, int value)
{
  int *field = (int *)((char *)object + 0);
  int bits = *field & value;
  return bits != 0;
}
