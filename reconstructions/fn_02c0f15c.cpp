extern "C" bool fn_02c0f15c(int object, int value)
{
  int flags = *(int *) object;
  return (flags & value) != 0;
}
