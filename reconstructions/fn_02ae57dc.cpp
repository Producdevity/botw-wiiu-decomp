extern "C" void *fn_02c1974c(void *, int);

namespace {
struct Entry {
    char padding_0[0xC8];
    int value;
};

struct Object {
    char padding_0[8];
    void *manager;
    char padding_C[0x34];
    unsigned int state;
    char padding_44[0xC];
    int slot;
    char padding_54[0x13A];
    unsigned short flags;
};
}

extern "C" int fn_02ae57dc(void *self)
{
  switch (((Object *)self)->state) {
    case 2:
    case 10: {
      int slot = ((Object *)self)->slot;
      if (slot >= 0) {
        void *entry = fn_02c1974c(((Object *)self)->manager, slot);
        if (entry != 0) {
          return ((Entry *)entry)->value;
        }
      }
      return -1;
    }
    case 6:
      if ((((Object *)self)->flags >> 8) & 1) {
        int slot = ((Object *)self)->slot;
        if (slot >= 0) {
          void *entry = fn_02c1974c(((Object *)self)->manager, slot);
          if (entry != 0) {
            return ((Entry *)entry)->value;
          }
        }
      }
      return -1;
    default:
      return -1;
  }
}
