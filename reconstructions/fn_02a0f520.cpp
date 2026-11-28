extern "C" int fn_02a07b98(void *self);
extern "C" void fn_030bb668(void* state);
extern "C" void fn_030bb69c(void* state);
extern "C" bool fn_0378da88(void* context);

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

extern "C" int fn_02a0f520(char *object)
{
  char *lock = ((Object *) object)->lock;
  fn_030bb668(lock);
  if (fn_0378da88(((Object *) object)->state) != 0)
  {
    void *child = ((Object *) object)->child;
    if (child != 0)
    {
      int result = fn_02a07b98(child);
      fn_030bb69c(lock);
      return result;
    }
  }
  fn_030bb69c(lock);
  return 0;
}
