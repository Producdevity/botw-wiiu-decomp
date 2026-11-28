namespace {
struct Object {
    char padding_0[0xE4];
    int counter;
    char lock[1];
};
}

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" int fn_03743c74(void *object)
{
  void *lock = ((Object *) object)->lock;
  fn_030bb668(lock);
  int *counter = &((Object *) object)->counter;
  int count = *counter + 1;
  *counter = count;
  fn_030bb69c(lock);
  return count;
}
