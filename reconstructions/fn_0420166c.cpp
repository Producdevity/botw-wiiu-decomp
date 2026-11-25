extern "C" short fn_03f79c34(void *);

extern "C" short fn_0420166c(void *self)
{
  short result = 1;
  void *object = self;
  if (fn_03f79c34(object) != 0) {
    result = fn_03f79c34(object);
  }
  return result;
}
