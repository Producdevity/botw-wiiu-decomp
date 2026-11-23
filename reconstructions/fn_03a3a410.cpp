extern "C" int fn_03a3a410(int value, int index, void* object, int count, int extra) {
    *(int*)((char*)object + 4) = extra;
    return 0;
}
