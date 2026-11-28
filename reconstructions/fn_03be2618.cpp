extern "C" float data_103cf490;

namespace {
struct Output {
    char padding_0[0xB8];
    float x;
    float y;
    float z;
};
}

extern "C" void fn_03be2618(char *object, float *values)
{
  float min = data_103cf490;
  if (!(min > values[0]) && !(min > values[1]) && !(min > values[2]))
  {
    ((Output *) object)->x = values[0];
    ((Output *) object)->y = values[1];
    ((Output *) object)->z = values[2];
  }
}
