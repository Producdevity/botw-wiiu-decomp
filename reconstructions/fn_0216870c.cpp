namespace {
struct ClassInfo {
    char padding_0[0x30C];
    void *(*get_target)(void *);
};
struct Owner {
    char padding_0[0xE8];
    ClassInfo *info;
};
}

extern "C" void * fn_02c1a1fc(void *, void *);
extern "C" void * fn_02c19cc4(void *);
extern "C" void * fn_031983c8(void *, void *);

extern "C" void fn_0216870c(void **owner_slot)
{
  Owner *owner = (Owner *) *owner_slot;
  fn_02c1a1fc(owner, 0);
  fn_02c19cc4(owner);
  owner = (Owner *) *owner_slot;
  void *target = owner->info->get_target(owner);
  if (target != 0)
  {
    fn_031983c8(target, 0);
  }
}
