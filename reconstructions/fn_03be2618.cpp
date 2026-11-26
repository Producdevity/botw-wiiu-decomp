extern "C" float data_103cf490;

extern "C" void fn_03be2618(char *arg0, float *arg1)
{
  float min = data_103cf490;
  if (!(min > arg1[0]) && !(min > arg1[1]) && !(min > arg1[2]))
  {
    *((float *) (arg0 + 0xB8)) = arg1[0];
    *((float *) (arg0 + 0xBC)) = arg1[1];
    *((float *) (arg0 + 0xC0)) = arg1[2];
  }
}
