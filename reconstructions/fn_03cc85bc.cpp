namespace {
struct Header { unsigned short kind; unsigned short variant; };
}

extern "C" int fn_03cc85bc(void *object, int *size_out)
{
    if (object == 0 || size_out == 0) {
        return -1;
    }
    if ((unsigned int) (((Header*) object)->kind - 3) >= 9U || (((Header*) object)->variant != 1 && ((Header*) object)->variant != 2 && ((Header*) object)->variant != 6)) {
        return -2;
    }
    *size_out = 0x27CCC;
    return 0;
}
