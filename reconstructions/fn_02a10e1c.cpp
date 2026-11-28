extern "C" int fn_02a084c0(void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" bool fn_0378da88(void *);

namespace {
struct Object {
    char padding_0[0x1C];
    char lock[1];
    char padding_1d[0x267];
    char state[1];
    char padding_285[0xB];
    void *child;
};
}

extern "C" int fn_02a10e1c(char *object)
{
  char *lock = ((Object *) object)->lock;
  fn_030bb668(lock);
  if (fn_0378da88(((Object *) object)->state) != 0)
  {
    void *child = ((Object *) object)->child;
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
