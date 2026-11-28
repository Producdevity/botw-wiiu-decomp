extern "C" void *fn_0308e578(unsigned);
extern "C" int data_1035ef64;

namespace {
struct Object {
    int *table;
    char padding_4[0x10];
    int value_14;
    int value_18;
};
}

extern "C" void fn_03a54874(void *self)
{
  void *object = self;
  if (object != 0 || (object = fn_0308e578(0x1CU)) != 0) {
    ((Object *) object)->value_14 = 0;
    ((Object *) object)->value_18 = 0;
    ((Object *) object)->table = &data_1035ef64;
  }
}
