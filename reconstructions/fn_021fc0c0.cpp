namespace {
struct Item {
    char padding_0[0x34];
    char member[1];
};
}

extern "C" void* fn_02c19904(void *, int);
extern "C" int fn_02c19940(void *);
extern "C" int fn_02c1998c(void *);
extern "C" int fn_03396390(void *);

extern "C" int fn_021fc0c0(void **owner_slot)
{
  int index;
  int count;
  Item *item;
  if (fn_02c19940(*owner_slot) != 0)
  {
    count = fn_02c1998c(*owner_slot);
    index = 0;
    if (count > 0)
    {
      do
      {
        item = (Item *) fn_02c19904(*owner_slot, index);
        int found = (item != 0) && (fn_03396390(item->member) != 0);
        if (found)
        {
          return 1;
        }
        count -= 1;
        index += 1;
      } while (count != 0);
    }
  }
  return 0;
}
