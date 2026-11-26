extern "C" int fn_02a084c0(void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" bool fn_0378da88(void *);

extern "C" int fn_02a10e1c(char *arg0)
{
  char *lock = arg0 + 0x1C;
  fn_030bb668(lock);
  if (fn_0378da88(arg0 + 0x284) != 0)
  {
    void *child = *((void **) (arg0 + 0x290));
    if (child != 0)
    {
      int result = fn_02a084c0(child);
      fn_030bb69c(lock);
      return result;
    }
  }
  fn_030bb69c(lock);
  return 0;
}
