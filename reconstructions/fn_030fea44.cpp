extern "C" bool fn_030fea44(void *object, int value)
{
  int *field = (int *)object;
  int bits = *field & value;
  return bits != 0;
}
