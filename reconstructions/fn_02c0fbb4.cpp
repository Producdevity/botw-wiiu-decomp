extern "C" bool fn_02c0fbb4(void *object, int value)
{
  int flags = *(int *) object;
  return (flags & value) != 0;
}
