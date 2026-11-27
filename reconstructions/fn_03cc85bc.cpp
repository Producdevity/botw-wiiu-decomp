namespace {
struct Header { unsigned short kind; unsigned short variant; };
}

extern "C" int fn_03cc85bc(void *arg0, int *arg1)
{
    if (arg0 == 0 || arg1 == 0) {
        return -1;
    }
    if ((unsigned int) (((Header*) arg0)->kind - 3) >= 9U || (((Header*) arg0)->variant != 1 && ((Header*) arg0)->variant != 2 && ((Header*) arg0)->variant != 6)) {
        return -2;
    }
    *arg1 = 0x27CCC;
    return 0;
}
