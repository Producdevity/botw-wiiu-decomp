namespace {
struct Registry {
    char padding_0[0x10];
    char table[8];
    void **key;
};
}

extern "C" void * fn_0307cd30(void *, void *);
extern "C" void fn_0307cda0(void *);
extern "C" void fn_030ea2e0(void *);
extern "C" void * fn_030747f8(void *);
extern "C" void fn_0307cd5c(void *, void *);

namespace {
inline void *find_entry(char *table, void **key)
{
  return fn_0307cd30(table, *key);
}
}

extern "C" void fn_022a907c(void *object)
{
  Registry *registry = (Registry *) object;
  void *entry = find_entry(registry->table, registry->key);
  if (entry == 0)
  {
    fn_0307cda0(registry->table);
    fn_030ea2e0(object);
    return;
  }
  fn_030747f8(entry);
  fn_0307cd5c(registry->table, *registry->key);
}
